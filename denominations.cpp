#include <iostream>
//Denomination question
//Find minimum number of currency notes and values that sum to given amount

int calculateNotes(int a[], int sizeA, int target)
{
    int i = 0;
    int count = 0;
    while(target != 0)
    {
        if(target-a[i] >= 0)
        {
            target = target - a[i];
            count++;
        }
        else
        {
            i++;
        }
    }
    return count;
}

int main() {
	// your code goes here
	int a[] = {2000, 500, 200, 100, 50, 20 ,10, 5, 1};
	int target = 2456;
	int sizeA = sizeof(a)/sizeof(a[0]);
	int ans = calculateNotes(a, sizeA, target);
	std::cout<<ans<<std::endl;
	return 0;
}
