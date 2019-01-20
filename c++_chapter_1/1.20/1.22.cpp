#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item trans1, trans2;
    cout << "input some sales record" << endl;
    if (cin >> trans1)
    {
        int num = 1;
        while (cin >> trans2)
        {
            if (compareIsbn(trans1, trans2))
            {
                num++;
            }
            else
            {
                cout << trans1.isbn() << " have sold " << num << endl;
                num = 1;
                trans1 = trans2;
            }
        }
        cout << trans1.isbn() << " have sold " << num << endl; 
    }
    else
    {
        cout << "error" << endl;
    }

    return 0;
}
