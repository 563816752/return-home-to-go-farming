#include<iostream>
using namespace std;
class A{
    public:
    static A& getins();
    void setup(){cout<<"hello world"<<endl;}
    private:
    A(); 
};
A& A::getins()
{
    static A a;
    return a;
}
int main()
{
    A::getins().setup();
}