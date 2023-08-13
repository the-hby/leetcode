#include<iostream>
#include<map>
#include<string>
using namespace std;
int romanToInt(string s)
{
    map<char,int>tmp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int number=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='I'&&(s[i+1]=='V'||s[i+1]=='X'))
        {
            number-=2;
        }
        if(s[i]=='X'&&(s[i+1]=='L'||s[i+1]=='C'))
        {
            number-=2*10;
        }
        if(s[i]=='C'&&(s[i+1]=='D'||s[i+1]=='M'))
        {
            number-=2*100;
        }
        number+=tmp[s[i]];
    }
    return number;
}