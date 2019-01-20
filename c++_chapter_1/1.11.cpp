#include<iostream>
using namespace std;
/*  我的解法
int main(int argc, char const *argv[])
{
    cout<<"input two numbers"<<endl;
    int num_1,num_2;
    cin>>num_1>>num_2;
    int num_max,num_min;
    if(num_1>num_2)
    {
        num_max=num_1;
        num_min=num_2;
    }
    else if(num_1==num_2)
    {
        cout<<"NULL"<<endl;
        return 0;
    }
    else
    {
        num_max=num_2;
        num_min=num_1;
    }
    while(num_min<num_max-1)
    {
        num_min++;
        cout<<num_min<<endl;
    }
    return 0;
}*/
int main()
{
    int v1,v2;
    cin>>v1>>v2;
    if(v1>v2)
    {
       while(v1>=v2)
       {
          cout<<v1<<"  ";
          v1--;
       }
    }
    else
    {
        while(v1<v2)
        {
            cout<<v1<<" ";
            v1++;
        }
    }
    cout<<endl;
    return 0;

}
