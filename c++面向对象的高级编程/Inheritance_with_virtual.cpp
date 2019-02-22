#include<iostream>
using namespace std;
class baseA{
public:
void openflie()
{
    cout<<"1111"<<endl;
    cout<<"2222"<<endl;
    ser();
    cout<<"4444"<<endl;
}
virtual void ser(){};
};
class derivedA:public baseA
{
    public:
    void ser()
    {
        cout<<"3333"<<endl;
    }
};
int main()
{
   derivedA hehe;
   hehe.openflie(); 
}