#include <iostream>
#include "delegation.h"
using namespace std;

int main()
{
    stringRep sr("hellow1");
    sstring str1(sr);
    cout<<str1.rep->getchr()<<endl<<endl;
    char temp[10]="222";
    sr=temp;
    cout<<str1.rep->getchr()<<endl<<endl;
    return 0;
}