#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"hello world"<<endl;
    cout<<argv[0]<<endl;
    system("pause");
    return 0;
}
  //argc是命令行总的参数个数   
  //argv[]是argc个参数，其中第0个参数是程序的全名，以后的参数命令行后面跟的用户输入的参数，比如：   