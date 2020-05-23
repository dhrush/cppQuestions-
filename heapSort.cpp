#include <iostream>
using namespace std;

void heapify(int a[], int i, int n)
{
    int max = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && a[left]>a[max])
    {
        max = left;
    }
    if(right<n && a[right]>a[max])
    {
        max = right;
    }
    
    if(max != i)
    {
        swap(a[max],a[i]);
        
        heapify(a,max,n);
    }
}

void heap_Sort(int a[], int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        heapify(a,i,n);
    }
    
    for(int i=n-1; i>0; i--)
    {
        swap(a[0], a[i]);
        
        heapify(a,0,i);
    }
}

void printA(int a[], int len)
{
    for(int i=0; i<len; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main() {
    int a[] = {1,56,12,45,87,9,3,6,4};
    int sizeA = sizeof(a)/sizeof(a[0]);
    heap_Sort(a, sizeA);
    printA(a, sizeA);
	return 0;
}
