//作者：代码随想录
//链接：https://leetcode.cn/problems/longest-palindromic-substring/solutions/1013163/dai-ma-sui-xiang-lu-5-zui-chang-hui-wen-kgyl1/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//动态规划法
string longestPalindrome1(string s) 
{
    vector<vector<int>> dp(s.size(), vector<int>(s.size(), 0));
    int maxlenth = 0;
    int left = 0;
    int right = 0;
    for (int i = s.size() - 1; i >= 0; i--) 
    {
        for (int j = i; j < s.size(); j++) 
        {
            if (s[i] == s[j] && (j - i <= 1 || dp[i + 1][j - 1])) 
            {
                dp[i][j] = true;
            }
            if (dp[i][j] && j - i + 1 > maxlenth) 
            {
                maxlenth = j - i + 1;
                left = i;
                right = j;
            }
        }
    }
    return s.substr(left, maxlenth);
}
//双指针法或中心扩散法
void extend(const string &s,int i,int j,int &n,int &left,int &right)
{
    while(i>=0&&j<s.size()&&s[i]==s[j])
    {
        if(j-i+1>n)
        {
            right=j;left=i;
            n=j-i+1;
        }
        i--;
        j++;
    }
}
string longestPalindrome2(string s)
{
    int maxlength=0;
    int left=0;int right=0;
    for(int i=0;i<s.size();i++)
    {
        extend(s,i,i,maxlength,left,right);
        extend(s,i,i+1,maxlength,left,right);
    }
    return s.substr(left,maxlength);
}