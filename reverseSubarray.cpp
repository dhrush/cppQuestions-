#include <iostream>
using namespace std;

void reverse(int a[], int len, int k)
{
    for(int i=0; i<len; i+=k)
    {
        int left = i;
        int right = min(i+k-1, len-1);
        while(right>=left)
        {
            swap(a[left++], a[right--]);
        }
    }
}

void showA(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main() {
    int a[] = {1,2,3,4,5};
    //expected o/p= 3,2,1,5,4
    int sizeA = sizeof(a)/sizeof(a[0]);
    int k = 3;
    reverse(a, sizeA, k);
    showA(a,sizeA);
    return 0;
}
