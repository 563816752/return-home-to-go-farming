#include <iostream>
using namespace std;
int main()
{
    int sum = 0, value = 0;
    cout << "input some numbers end with ctrl+z" << endl;
    for (; cin >> value;)
    {
        sum += value;
    }
    cout << "the sum number is " << sum << endl;
    return 0;
}
