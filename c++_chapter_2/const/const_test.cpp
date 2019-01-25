#include<iostream>
using namespace std;
const int a=8;
int main()
{
    int b=a;
    b++;
    cout<<a<<"  "<<b<<endl;
    const int* p=&b;
    cout<<*p<<endl;
    b++;
    int c=12;
    p=&c;
    cout<<*p<<endl;
    int* const p2 = &b;
    cout<<*p2<<endl;
    *p2=15;
    cout<<*p2<<endl;
}