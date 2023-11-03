#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int size=s.size()-1;
        while(size>=0){
            if(s[size]!=32){break;}
            size--;
        }
        for(int i=size;i>=0;i--){
            if(s[i]==32){break;}
            length++;
        }
        return length;
    }   
};