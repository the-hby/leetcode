//作者：稳健
//链接：https://leetcode.cn/problems/integer-to-roman/solutions/636753/cxie-fa-by-wen-jian-69-whrb/
//来源：力扣（LeetCode）
//著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
#include<iostream>
#include<string>
using namespace std;
string intToRoman(int num) 
{

    string strs[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ans;
    for (int i = 0; num != 0; i++) 
    {
        while (num >= nums[i]) 
        {
            ans += strs[i];
            num -= nums[i];
        }
    }
    return ans;
}

