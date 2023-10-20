#include<iostream>
#include<string>
using namespace std;
 string countAndSay(int n) {
    if(n==1){return "1";}
    string tmp=countAndSay(n-1);
    int j=1;string answer;
    for(int i=0;i<tmp.size()-1;i++)
    {
        if(tmp[i]==tmp[i+1]){j++;}
        else{
            answer+=to_string(j);
            answer+=tmp[i];j=1;
        }
    }
    answer+=to_string(j);answer+=tmp[tmp.size()-1];
    return answer;
}