#include<iostream>
#include<vector>
#include<map>
using namespace std;
//暴力解法
vector<int> twoSum1(vector<int>&nums,int target)
{
    vector<int>tmp;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]+nums[j]==target)
            {
                tmp.push_back(i);
                tmp.push_back(j);
            }
        }
    }
    return tmp;
}
//一遍哈希
vector<int> twoSum2(vector<int>&nums,int target)
{
    vector<int>tmp;
    map<int,int>a;
    for(int i=0;i<nums.size();i++)
    {
        if(a.count(target-nums[i]))
        {
            tmp.push_back(i);
            tmp.push_back(a[target-nums[i]]);
        }
        a[nums[i]]=i;
    }
    return tmp;
}