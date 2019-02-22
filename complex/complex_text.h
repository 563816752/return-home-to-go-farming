#ifndef _complex_text_
#define _complex_text_//防卫式声明

#include<cmath>

class complex
{
public:
    complex(double r=0,double i=0):re(r),im(i){}//初值列，初始化
    double real() const{ return re;}//如果这个函数不改变初始值则认为const
    double imag() const{ return im;}
    complex& operator += (const complex&);//声明了一个+=函数 输出是一个complex的引用
    complex operator  -- ();
private:
    double re,im;//数据封装起来
    friend complex & __doapl(complex*, const complex&);//友元函数
};

inline complex& __doapl(complex* ths, const complex& r)
{
    ths->re+=r.re;
    ths->im+=r.im;
    return *ths;
}
inline complex& complex::operator+=(const complex& r)
{
    return __doapl(this,r);//为了可以连乘
}
inline double imag(const complex &x)
{
    return x.imag();
}
inline double real(const complex &x)
{
    return x.real();
}
inline complex operator+ (const complex& x,const complex& y)
{
    return complex(real(x)+real(y),imag(x)+imag(y));
}
inline complex operator+ (const complex& x,double y)
{
    return complex(real(x)+y,imag(x));
}
inline complex operator+ (double x,const complex& y)
{
    return complex(x+real(y),imag(y));
}
inline complex operator +(const complex &x)
{
    return x;
}
inline complex operator -(const complex &x)
{
    return complex(-x.real(),-x.imag());
}
inline complex complex::operator --()
{
    return complex(this->real()-1,this->imag());
}
inline complex operator+ (const complex& x)
{
    return x;
}

#include<iostream>
using namespace std;
ostream &operator <<(ostream &os, const complex& x)
{
    return os<<"("<<x.real()<<","<<x.imag()<<")"<<endl;
}
#endif
/* 笔记
在class body中定义的会自动成为内联函数
不带指针的不用写析构函数
把构造函数写道private中产生singleton 单间，对象只有一个   static A& getInstance();
相同class的不同object互为友元
有地方可以放用引用来返回，没地方放返回值
typename()产生一个临时变量
*/

/*
疑问：
为什么函数要定义const
*/
 
/*
int i = 5;
int* iPtr = &i; // 类型化的指针，知道是从内存中取几个字节
printf("%d\n",iPtr);
int i1 = *iPtr;
printf("i1=%d\n",i1); // 取iPtr指针指向的内存中的数据

iptr 是int* 类型
iptr 存放的是 i的地址
*iptr 可以地址对应的
*/
/*
1、前置++重载时没有参数，而后置++重载时有参数。不会使用其参数，仅仅是区分用。可以理解为前置++后面有参数了，所以不需要参数 

2、前置++需要返回引用，因为重载自加运算符后可以返回对象的引用， 以方便在表达式中连续使用。而后置++返回的不是引用，所以不能进行连续使用。

3.后置运算符返回的值是temp，需要注意。因为是后加。
--------------------- 
作者：love music. 
来源：CSDN 
原文：https://blog.csdn.net/qq_29762941/article/details/80973027 
版权声明：本文为博主原创文章，转载请附上博文链接！
*/