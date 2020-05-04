#include<iostream>
using namespace std;

/*
Given a sorted array of positive integers.
Your task is to rearrange  the array elements alternatively 
i.e first element should be max value, 
second should be min value, third should be second max, 
*/

void rearrangeArray(int a[], int len)
{
    int i=0, j=len-1;
    int b[len];
    int k=0;
    while(j>=i)
    {
        if(k%2 == 0)
        {
            b[k] = a[j];
            j--;
            k++;
        }
        else
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(int i=0; i<len; i++)
    {
        cout<<b[i]<<endl;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int sizeArr = sizeof(a)/sizeof(a[0]);
    rearrangeArray(a, sizeArr);
    return 0;
}