#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a, a);
}

int main() {
	// your code goes here
	int a=42, b=0;
	int ans = gcd(a,b);
	cout<<ans<<endl;
	return 0;
}
