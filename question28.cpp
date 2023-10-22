#include<iostream>
#include<string>
using namespace std;
 int strStr(string haystack, string needle) {
    int i=0;bool judge=false;
    while(i<haystack.size())
    {
        if(haystack[i]==needle[0])
        {
            for(int j=0;j<needle.size();j++)
            {
                if(needle[j]!=haystack[i+j]||i+j>=haystack.size())
                {
                    judge=false;break;
                }
                judge=true;
            }
        }
        if(judge){return i;}
        i++;
    }
    return -1;
}