#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//contiguous sub-array with maximum sum

int maxSumContSubarray(int a[], int sizeA)
{
    int meh = 0;
    int msf = INT_MIN;
    for(int i=0; i<sizeA; i++)
    {
        meh += a[i];
        
        if(meh < a[i])
        {
            meh = a[i];
        }
        
        if(msf < meh)
        {
            msf = meh;
        }
    }
    return msf;
}

int main() 
{
	int a[] = {-1, -2, -3, -4, 6, -2};
	int sizeA = sizeof(a)/sizeof(a[0]);
	int sum = maxSumContSubarray(a, sizeA);
	cout<<sum<<endl;
	return 0;
}
