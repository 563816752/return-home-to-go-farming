#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"请输入两个数";
    cout<<endl;// 将缓冲区的所有信息
    int num1,num2;
    cin>>num1>>num2;
    cout<<num1<<"and"<<num2<<"的乘积是"<<num1*num2<<endl;
    return 0;
}
