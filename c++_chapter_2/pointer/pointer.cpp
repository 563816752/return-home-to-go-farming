#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ival=42;
<<<<<<< HEAD:c++_chapter_2/pointer/pointer.cpp
    int *p；
    p=&ival;
    cout<<ival<<"   "<<p<<endl;
    cout<<*p<<endl;
=======
    int* p=&ival;//p中存放的是ival的地址，int* 是变量类型
    cout<<ival<<"   "<<p<<"  "<<*p<<endl;
    int** pi=&p;
    cout<<pi<<"  "<<*pi<<"  "<<**pi<<endl;
>>>>>>> cc3b8ac3ab98d74fdce714adcc8c881b8597e6bb:c++_chapter_2/pointer.cpp
    return 0;
}
