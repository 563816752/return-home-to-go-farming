#include<iostream>
#include"complex_text.h"
using namespace std;

int main()
{
    complex c1(2,1);
    complex c2(3,2);
    //complex c3();// 无任何意义，声明一个返回值为Test对象的无参函数
    complex c3;
    cout<<c3<<endl;
    cout<<c1.real()<<endl;
    //complex* p=new complex(3,4);//对象指针引用用。 指针用->
    c2+=c1+=c1;
    cout<<c1<<endl;
    cout<<-c1<<endl;
    cout<<--c3<<endl;
    cout<<c3<<endl;

}