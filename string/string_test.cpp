#include<iostream>
#include"mystring.h"
using namespace std;
int main()
{
    String s1;
    cout<<s1<<endl;
    String s2("hello");
    cout<<s2<<endl;
    s1=s2;
    cout<<s1<<endl;
    String s3(s1);
    cout<<s3<<endl;
    cout<<endl;
}