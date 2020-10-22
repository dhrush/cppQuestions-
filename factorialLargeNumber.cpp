#include <iostream>
#define MAX 500

using namespace std;

int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
  
        // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 

void callFunction(int n)
{
    // Logic goes here
   int res[MAX]; 
  
    // Initialize result 
    res[0] = 1; 
    int res_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
    cout<<"\n";
}

int main()
{
    int testCases;
    cin>>testCases;
    while(testCases--)
    {
        int n;
        //cin>>k;         //generally target
        cin>>n;         //generally size of array
        //int arr[n];
        //for(int i=0; i<n; i++)  cin>>arr[i];
        callFunction(n);
    }
}