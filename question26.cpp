#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>& nums)
{
    vector<int>tmp;
    tmp.push_back(nums[0]);
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            tmp.push_back(nums[i+1]);
        }
    }
    for(int i=0;i<tmp.size();i++)
    {
        nums[i]=tmp[i];
    }
    return tmp.size();
}