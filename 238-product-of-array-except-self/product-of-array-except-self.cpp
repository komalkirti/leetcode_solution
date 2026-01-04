class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int s=1,e=1;
        for(int i=1;i<n;i++){
            s=s*nums[i-1];
            ans[i]=s;
        }
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*e;
            e=e*nums[i];
        }
       return ans;
        
    }
};