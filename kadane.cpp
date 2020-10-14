#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//contiguous sub-array with maximum sum

int maxSumContSubarray(int a[], int sizeA)
{
    int curr_window = 0;
    int max_so_far = INT_MIN;
    for(int i=0; i<sizeA; i++)
    {
        curr_window += a[i];
        
        if(curr_window < a[i])
        {
            curr_window = a[i];
        }
        
        if(max_so_far < curr_window)
        {
            max_so_far = curr_window;
        }
    }
    return max_so_far;
}

int main() 
{
	int a[] = {-1, -2, -3, -4, 6, -2};
	int sizeA = sizeof(a)/sizeof(a[0]);
	int sum = maxSumContSubarray(a, sizeA);
	cout<<sum<<endl;
	return 0;
}
