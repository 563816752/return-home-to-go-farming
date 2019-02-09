#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a=0,b=0,c=0,d=0,e=0;
    while(cin>>ch)
    {
       switch (ch)
       {
           case 'a':
               a++;
               //break;
           case 'b':
               b++;
               //break;
           case 'c':
               c++;
              //break;
           case 'd':
               d++;
               //break;
           default:
               e++;
               break;
       }
    }
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
}