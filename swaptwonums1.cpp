//swapping by using temp, input from the user

#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;

    cout<<"Enter the first number: ";
    cin>> a;

    cout<<"Enter the second number: ";
    cin>> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Values after swapping-------"<<std::endl;
    cout << "a = " <<a <<std::endl;
    cout << "b = " <<b;
}