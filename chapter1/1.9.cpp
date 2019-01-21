#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sum=0;
    int i=50;
    while(i<=100)
    {
        sum+=i;
        i+=1;
    }
    cout<<"the sum of 50 to 100"<<sum<<endl;
    return 0;
}
