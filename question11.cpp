#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>&height)
{
    int lo=0;int hi=height.size()-1;
    int area=min(height[lo],height[hi])*(hi-lo);
    while(lo<hi)
    {
        while(height[lo]>height[hi]&&lo<hi)
        {
            hi--;
            int tmpArea=min(height[lo],height[hi])*(hi-lo);
            area=max(tmpArea,area);
        }
        while(height[lo]<=height[hi]&&lo<hi)
        {
            lo++;
            int tmpArea=min(height[lo],height[hi])*(hi-lo);
            area=max(area,tmpArea);
        }
    }
    return area;
}