#include<iostream>
using namespace std;
int  main()
{
    int a=0;
    int b={0};
    int c{0};
    int d(0);
    //只声明不定义
    extern int f;
    cout<<a<<b<<c<<d;
}