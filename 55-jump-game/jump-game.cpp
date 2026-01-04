class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        int maxReach=0;
        for(int i=0;i<=maxReach && maxReach<n-1;i++){
            int reach = i+nums[i];
            maxReach = max(reach,maxReach);
        }
        if(maxReach>=n-1)return true;
        else return false;
    }
};