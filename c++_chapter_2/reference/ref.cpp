#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ival=1024;
    int &ref=ival;
    ival+=1;
    cout<<ival<<"  "<<ref<<endl;
    cout<<&ival<<"  "<<&ref<<endl;
    int ival2=ref;
    ival+=1;
    cout<<ival2<<"  "<<ival<<"  "<<ref<<endl;
    cout<<"---------------------------------------------"<<endl;
    int* ref2=&ival;
    cout<<ref2<<"   "<<*ref2<<endl;
    return 0;
}
