class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int low=0,high=n-1;
        int maxA=0;
        int curArea=0;
        while(low<high){
            curArea = (min(height[low],height[high]))*(high-low);
            maxA=max(maxA,curArea);
            if(height[low]<height[high])low++;
            else high--;
        }
        return maxA;
        
    }
};