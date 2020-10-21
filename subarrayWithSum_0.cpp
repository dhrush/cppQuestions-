#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

void callFunction(int a[], int n)
{
    // Logic goes here
    //O(n^2)
    /*string ans="No";
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=i; j<n; j++)
        {
            sum += a[j];
            if(sum==0)
            {
                ans = "Yes";
                break;
            }
        }
        if(ans=="Yes")  break;
    }
    cout<<ans<<"\n";*/
    //O(n)
   unordered_set<int> iset;
    int sum = 0;
    string ans="No";
    for(int i=0; i<n; i++)
    {
        iset.insert(sum);
        sum += a[i];
        auto it = iset.find(sum);
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
        //cin>>k;         //generally target
        cin>>n;         //generally size of array
        int arr[n];
        for(int i=0; i<n; i++)  cin>>arr[i];
        callFunction(arr, n);

    }
}