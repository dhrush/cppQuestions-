#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

void callFunction(int a[], int n, int k)
{
   unordered_set<int> iset;
    int sum = 0;
    string ans="No";
    for(int i=0; i<n; i++)
    {
        iset.insert(sum);
        sum += a[i];
        auto it = iset.find(sum-k);
        if(it!=iset.end())
        {
              ans = "Yes";
              break;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        int n;
        cin>>k;         //generally target
        cin>>n;         //generally size of array
        int arr[n];
        for(int i=0; i<n; i++)  cin>>arr[i];
        callFunction(arr, n, k);

    }
}