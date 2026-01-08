class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n=nums.size();

        int left=0,right=0;
        int curSum=0,ans=INT_MAX;

        while(left<n && right<n){

            curSum+=nums[right];
            while(curSum>=target){
                ans=min(ans,right-left+1);
                curSum=curSum-nums[left];
                left++;
            }
            right++;
        }
        if(ans==INT_MAX) return 0;
        else return ans;
        
    }
};