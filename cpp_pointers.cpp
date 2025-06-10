#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




void update(int* a, int* b)//function arguments - integer pointers a and b
{
    int sum,dif;
    sum = *a + *b;// *a - the value pointed at by the address of a, *b - the value pointed at by the address of b 
    dif = abs(*a - *b);
    *a = sum;//a is the address, *a is the value pointed at by the address of a - 
    *b = dif;
    cout<<*a<<endl;
    cout<<*b;
}

int main() 
{
    int x,y;
    cin>>x;
    cin>>y;
    update(&x,&y);   // function call - passing the addresses of a and b
    return 0;
}
