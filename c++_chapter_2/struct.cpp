#include<iostream>
using namespace std;
struct sale_data{
    double price;
    string name="NULL";
}sale;
int main()
{
    sale_data data1;
    sale.name;
    data1.name="1111";
    cout<<data1.name<<"  "<<sale.name<<endl;
    return 0;
}