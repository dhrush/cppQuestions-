#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    vector<int> nums = {1,5,7,1};
    int target = 6;
    int count = 0;
    unordered_map<int,int> imap;
    for(auto idx = nums.begin(); idx!=nums.end(); ++idx)
    {   
        auto it = imap.find(target - *idx);
        if(it!=imap.end())   count++;
        imap[*idx] = idx-nums.begin();
    }
    cout<<count<<"\n";
    return 0;
}