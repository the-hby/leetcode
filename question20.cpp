#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string s)
{
    stack<char>tmp;
    for(int i=0;i<s.size();i++)
    {
       switch(s[i])
       {
            case '(':tmp.push(s[i]);break;
            case '[':tmp.push(s[i]);break;
            case '{':tmp.push(s[i]);break;
            case ')':if((tmp.empty())||(tmp.top()!='('))return false;tmp.pop();break;
            case ']':if((tmp.empty())||(tmp.top()!='['))return false;tmp.pop();break;
            case '}':if((tmp.empty())||(tmp.top()!='{'))return false;tmp.pop();break;
            default:break;
       }
    }
    return tmp.empty();
}