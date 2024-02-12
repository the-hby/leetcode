#include"tool.h"
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==1){
            vector<vector<int>>ans={{1}};
            return ans;
        }
        if(numRows==2){
            vector<vector<int>>ans={{1},{1,1}};
            return ans;
        }
        vector<vector<int>>ans={{1},{1,1}};
        for(int i=2;i<numRows;i++){
            vector<int>tmp;
            for(int j=0;j<=i;j++){
                if(j==i||j==0){
                    tmp.push_back(1);
                    continue;
                }
                tmp.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};