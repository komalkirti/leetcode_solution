class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>left(n);
        vector<int>right(n);
        left[0]=1,right[n-1]=1;
        int s=1,e=1;
        for(int i=1;i<n;i++){
            s=s*nums[i-1];
            left[i]=s;
        }
        for(int i=n-2;i>=0;i--){
            e=e*nums[i+1];
            right[i]=e;
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
        
    }
};