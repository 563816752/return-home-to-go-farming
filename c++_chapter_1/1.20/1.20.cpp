#include <iostream>
#include "Sales_item.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Sales_item books;
    cout<<"Please enter a sales record"<<endl;
    while(cin>>books)
    {
        cout<<"ISBN,Number of sold,price,average price "<<books<<endl;
    }  
    return 0;
}

