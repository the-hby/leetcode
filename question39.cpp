#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>tmp;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,tmp,0,target);
        return the_answer;
    }
    void dfs(vector<int>&candidates,vector<int>&answer,int i,int target)
    {
        if(target==0)
        {
            the_answer.push_back(answer);
            return;
        }
        else{
            for(int j=i;j<candidates.size();j++)
            {
                if(target-candidates[j]<0){return;}
                answer.push_back(candidates[j]);
                dfs(candidates,answer,j,target-candidates[j]);
                answer.pop_back();
            }
            return;
        }
       
    }
    vector<vector<int>>the_answer;
};