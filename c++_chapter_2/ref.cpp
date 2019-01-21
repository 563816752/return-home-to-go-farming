#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ival=1024;
    int &ref=ival;
    ival+=1;
    cout<<ival<<"  "<<ref<<endl;
    int ival2=ref;
    ival+=1;
    cout<<ival2<<"  "<<ival<<"  "<<ref<<endl;
    return 0;
}
