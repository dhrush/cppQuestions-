#include<iostream>
using namespace std;

void findLeadersBF(int a[], int len)
{
    //Brute Force O(n^2)
    for(int i=0; i<len; i++)
    {
        int max = a[i];
        for(int j=i+1; j<len; j++)
        {
            if(a[j]>max)
            {
                max = a[j];
            }
        }
        if(max == a[i])
            cout<<a[i]<<" ";
    }
    cout<<"\n";
    
}

void findLeadersOpt(int a[], int len)
{
    //traversing array from end to starting for O(n) TC.
    int max = 0;
    int b[size];
    for(int i=len-1; i>=0; i--)
    {
        if(a[i] >= max)
        {
            max = a[i];
            cout<<a[i]<<" ";
        }
    }
}

int main()
{
    int a[] = {16,17,4,3,5,2};
    int sizeA = sizeof(a)/sizeof(a[0]);
    //findLeadersBF(a, sizeA);
    findLeadersOpt(a, sizeA);
}