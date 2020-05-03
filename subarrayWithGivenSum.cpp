#include <iostream>
using namespace std;
//Subarray with given sum

void calculateSubarray(int a[], int sizeA, int target)
{
    int i=0, j=0, ws=0;
    while(ws != target)
    {
        
        if(ws<target)
        {
            ws = ws + a[i];
            i++;
        }
        
        if(ws>target)
        {
            ws = ws - a[j];
            j++;
        }
    }
    cout<<j+1<<i<<ws<<endl;
}

int main() {
	int a[] = {1, 2, 3, 7, 5};
	int target = 12;
	int sizeA = sizeof(a)/sizeof(a[0]);
	calculateSubarray(a, sizeA, target);
	return 0;
}
