#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ival=42;
    int *p=&ival;
    cout<<ival<<"   "<<p<<endl;
    cout<<*p<<endl;
    return 0;
}
