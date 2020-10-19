#include <iostream>
#include <vector>

using namespace std;
int main() 
{
    int a[] = {1, 5, 10, 20, 40, 80, 90};
    int n1 = sizeof(a)/sizeof(a[0]);
    int b[] = {6, 7, 20, 80, 90, 100};
    int n2 = sizeof(b)/sizeof(b[0]);
    int c[] = {3, 4, 15, 20, 30, 70, 80, 90, 120};
    int n3 = sizeof(c)/sizeof(c[0]);
    int i=0,j=0,k=0;
    vector<int> op;
    while(i<n1 && j<n2 && k<n3)
    {
        if(a[i]==b[j] && b[j]==c[k])
        {
            op.push_back(a[i]);
            i++;j++;k++;
        }
        else if(a[i]<b[j])  i++;
        else if(b[j]<c[k])  j++;
        else k++;
    }
    
    for(auto it : op)
        cout<<it<<" ";
}