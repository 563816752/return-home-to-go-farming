#include<iostream>
using namespace std;
struct sale_data{
    double price;
    string name;
};
int main()
{
    sale_data data1;
    data1.name="1111";
    cout<<data1.name<<endl;
    return 0;
}