#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<int>tmp;
        std::sort(candidates.begin(),candidates.end());
        dfs(candidates,tmp,0,target);
        return the_answer;
    }
    void dfs(vector<int>&candidates,vector<int>&tmp,int i,int target){
        if(target==0)
        {
            the_answer.push_back(tmp);
            return;
        }
        else{
            for(int j=i;j<candidates.size();j++)
            {
                if(target-candidates[j]<0){break;}
                if(j>i&&candidates[j]==candidates[j-1])
                {
                    continue;
                }//这一步是重点
                tmp.push_back(candidates[j]);
                dfs(candidates,tmp,j+1,target-candidates[j]);
                tmp.pop_back();
            }
        }
    }
    vector<vector<int>>the_answer;
};