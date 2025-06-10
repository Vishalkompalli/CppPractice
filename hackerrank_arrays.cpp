#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>N;
    int arr[N];
    for(i = 0;i < N;i++)
    {
        cin >> arr[i];
    } 
    
    for(int j = N-1;j>=0;j--)
    //for(int j=0;j<N;j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
