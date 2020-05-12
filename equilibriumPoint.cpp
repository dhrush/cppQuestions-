#include<iostream>
using namespace std;

int findEq(int a[], int size)
{
    int flag = 0;
    int ans;
    if(size<1)
    {
        return -1;
    }
    else if(size == 1)
    {
        return 1;
    }
    else if(size >=2)
    {
        int sumLeft = 0;
        int sumRight = 0;
        for(int i=1; i<size; i++)
        {
            sumRight += a[i];
        }
        
        for(int j=1; j<size-1; j++)
        {
            sumLeft += a[j-1];
            sumRight -= a[j];
            
            if(sumLeft == sumRight)
            {
                flag++;
                ans = j;
                break;
            }
        }
        if(flag<1)
            return -1;
        else 
        return ans+1;
    }
    
}

int main()
{
    int a[] = {4,5,2,0};
    int sizeA = sizeof(a)/sizeof(a[0]);
    int ans = findEq(a, sizeA);
    cout<<ans<<endl;
}