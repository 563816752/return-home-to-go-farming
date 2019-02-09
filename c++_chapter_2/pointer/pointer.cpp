#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ival=42;
    int* p=&ival;//p中存放的是ival的地址，int* 是变量类型
    cout<<ival<<"   "<<p<<"  "<<*p<<endl;
    int** pi=&p;
    cout<<pi<<"  "<<*pi<<"  "<<**pi<<endl;
    return 0;
}
