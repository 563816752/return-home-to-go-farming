#include<iostream>
#include"complex_text.h"
using namespace std;

int main()
{
    complex c1(2,1);
    complex c2(3,2);
    cout<<c1.real()<<endl;
    complex* p=new complex(3,4);//对象指针引用用。 指针用->
    c2+=c1+=c1;
    cout<<p->real()<<endl;
    cout<<c2.real()<<endl;
}