#include<iostream>
using namespace std;
void Cpf(const int a)
{
   cout<<a<<endl;// ++a;  it's wrong, a can't is changed
}
void Cpf2(int a)
{
   cout<<a<<endl;// ++a;  it's wrong, a can't is changed
   a++;
   cout<<a<<endl;
}
int main()
{
    Cpf(8);
    const int b=10;
    Cpf2(b);
    return 0;
}