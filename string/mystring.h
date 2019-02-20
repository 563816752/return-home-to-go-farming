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
char *m_data;//�ַ����ĳ��Ȳ�������Ϊָ�����
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
inline String::~String()//���������ͷ��ڴ�
{
    delete[] m_data;
}
inline String::String(const String& str)//�������캯�� ��һ���ַ����Ķ�����������һ���ַ���
{
    m_data=new char[strlen(str.m_data)+1];//���ϵͳ�Դ��Ŀ������캯���������ֱ�����������ָ��ָ��ͬһ��λ�õ���������ڵ�Ŀ���ǲ���һ���µĺ�ԭ����ֵһ���ı���
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

/*-----------------------�ʼ�----------------------------*/
/*
1.��������ֵ��������������ɣ���Ҫ�ڶ���������ж�����ֵ

*/
/*------------------------------------------------------*/












#endif