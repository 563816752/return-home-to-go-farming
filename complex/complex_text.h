#ifndef _complex_text_
#define _complex_text_//����ʽ����

#include<cmath>

class complex
{
public:
    complex(double r=0,double i=0):re(r),im(i){}//��ֵ�У���ʼ��
    double real() const{ return re;}//�������������ı��ʼֵ����Ϊconst
    double imag() const{ return im;}
    complex& operator += (const complex&);//������һ��+=���� �����һ��complex������
private:
    double re,im;//���ݷ�װ����
    friend complex & __doapl(complex*, const complex&);//��Ԫ����
};

inline complex& __doapl(complex* ths, const complex& r)
{
    ths->re+=r.re;
    ths->im+=r.im;
    return *ths;
}
inline complex& complex::operator+=(const complex& r)
{
    return __doapl(this,r);//Ϊ�˿�������
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
/* �ʼ�
��class body�ж���Ļ��Զ���Ϊ��������
����ָ��Ĳ���д��������
�ѹ��캯��д��private�в���singleton ���䣬����ֻ��һ��   static A& getInstance();
��ͬclass�Ĳ�ͬobject��Ϊ��Ԫ
�еط����Է������������أ�û�ط��ŷ���ֵ
*/

/*
���ʣ�
Ϊʲô����Ҫ����const
*/
 
/*
int i = 5;
int* iPtr = &i; // ���ͻ���ָ�룬֪���Ǵ��ڴ���ȡ�����ֽ�
printf("%d\n",iPtr);
int i1 = *iPtr;
printf("i1=%d\n",i1); // ȡiPtrָ��ָ����ڴ��е�����

iptr ��int* ����
iptr ��ŵ��� i�ĵ�ַ
*iptr ���Ե�ַ��Ӧ��
*/