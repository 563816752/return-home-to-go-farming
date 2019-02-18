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

#endif
/* 笔记
在class body中定义的会自动成为内联函数
不带指针的不用写析构函数
把构造函数写道private中产生singleton 单间，对象只有一个   static A& getInstance();
相同class的不同object互为友元
有地方可以放用引用来返回，没地方放返回值
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