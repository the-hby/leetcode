#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
//用hashmap实现
int lengthOfLongestSubstring1(string s)
{
    map<char,int>tmp;
    int lo=0;int length=0;
    for(int i=0;i<s.size();i++)
    {
        if(tmp.find(s[i])!=tmp.end()&&tmp[s[i]]>=lo)//这一步要注意判断是否为结尾
        {
            int tmp_length=i-lo;
            length=max(tmp_length,length);
            lo=tmp[s[i]]+1;
            tmp[s[i]]=i;
        }
        else
        {
           tmp[s[i]]=i;
        }
    }
    int tmp_length=s.size()-lo;
    return max(tmp_length,length);
}

//用数组的桶来实现
int lengthOfLongestSubstring2(string s)
{
        vector<int> m(128, 0);
        int ans = 0;
        int i = 0;
        for (int j = 0; j < s.size(); j++) 
        {
            i = max(i, m[s[j]]);
            m[s[j]] = j + 1;
            ans = max(ans, j - i + 1);

        }
        return ans;
}