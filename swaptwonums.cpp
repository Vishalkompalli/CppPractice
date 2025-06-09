//Using temp, values hardcoded

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, temp = 0;

    temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << std::endl;
    cout << "b = " << b;

    return 0;
}