#ifndef _MYSTRING_
#define _MYSTRING_
#include <cstring>
class String{
public:
String(const char* cstr=0);
String(const String& str);
String& operator=(const String& str);
char* get_c_str() const {return m_data;}
~String();
private:
char *m_data;//字符串的长度不定所以为指针变量
};
inline String::String(const char* cstr)
{
    if(cstr)
    {
        m_data=new char[strlen(cstr)+1];
        strcpy(m_data,cstr);
    }
    else
    {
        m_data=new char[1];
        *m_data='\0';
    }  
}
inline String::~String()//析构函数释放内存
{
    delete[] m_data;
}
inline String::String(const String& str)//拷贝构造函数 把一个字符串的东西拷到另外一个字符串
{
    m_data=new char[strlen(str.m_data)+1];//如果系统自带的拷贝构造函数，则会出现别名，及两个指针指向同一个位置的情况，现在的目的是产生一个新的和原来数值一样的变量
    strcpy(m_data,str.m_data);
}
inline String& String::operator=(const String& str)
{
    if(this==&str)
      return *this;
    delete [] m_data;
    m_data=new char[strlen(str.m_data)+1];
    strcpy(m_data,str.m_data);
    return *this;
}
#include<iostream>
std::ostream& operator<<(std::ostream& os,const String& str)
{
    os<<str.get_c_str();
    return os;
}

/*-----------------------笔记----------------------------*/
/*
1.函数赋初值定义在声明中完成，不要在定义和声明中都赋初值

*/
/*------------------------------------------------------*/












#endif