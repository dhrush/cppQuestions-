#include<iostream>

int findMissingNumber(int a[], int n)
{
    //this function uses sum technique that is substracting array's sum from 
    //sum of first n numbers
    int sizeA = n-1;
    int sum=0;
    for(int i=0; i<sizeA; i++)
    {
        sum += a[i];
    }
    
    int idealSum = n*(n+1)/2;
    return (idealSum - sum);
}

int getMissingNo(int a[], int len)
{
    //method based upon X-OR 
    int x1 = a[0];
    int x2 = 1;
    for(int i=1; i<len-1; i++)
    {
        x1 = x1 ^ a[i];
    }
    
    for(int i=2; i<=len; i++)
    {
        x2 = x2 ^ i;
    }
    
   
    return(x1 ^ x2);
}

int main()
{
    int a[] = {1, 2, 3, 4, 6, 7};
    int sizeA = 7;
    int missingNo = getMissingNo(a, sizeA);
    std::cout<<missingNo<<std::endl;
}