#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<bool>tmp(nums.size(),false);
        dfs(nums,tmp);
        return the_answer;
    }
    void dfs(vector<int>&nums,vector<bool>judge)
    {
        if(nums.size()==path.size())
        {

            the_answer.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(judge[i]==true)
            {
                continue;
            }
            if(i!=0&&nums[i-1]==nums[i]&&nums[i-1]==false)
            {
                continue;
            }
            path.push_back(nums[i]);
            judge[i]=true;
            dfs(nums,judge);
            path.pop_back();
            judge[i]=false;
        }
    }
    vector<vector<int>>the_answer;
    vector<int>path;
};