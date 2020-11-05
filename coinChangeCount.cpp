#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:
        int getCount(vector<int> &coins, int target)
        {
            int count[target+1];
            for(int i=0; i<target+1; i++)   count[i]=0;
            count[0]=1;
            
            for(int i=1; i<=target; i++)
            {
                for(auto c : coins)
                {
                    if(i-c>=0)
                    {
                        count[i] += count[i-c];
                    }
                }
            }
            
            return count[target];
        }
};

int main() 
{
	Solution ob;
	vector<int> coins = {1,3,4};
	int target = 5;
	cout<<ob.getCount(coins, target)<<"\n";
	return 0;
}
