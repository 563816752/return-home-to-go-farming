#include<iostream>
using namespace std;
const int a=8;
int main()
{
    int b=a;
    b++;
    cout<<a<<"  "<<b<<endl;
    const int* p=&b;
    b++;
    cout<<*p<<endl;
}