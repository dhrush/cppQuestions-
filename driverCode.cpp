#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int callFunction(int a[], int n)
{
    // Logic goes here
}

int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        int k,n;
        cin>>k;         //generally target
        cin>>n;         //generally size of array
        int arr[n];
        for(int i=0; i<n; i++)  cin>>arr[i];
        int ans = callFunction(arr, n);

    }
}