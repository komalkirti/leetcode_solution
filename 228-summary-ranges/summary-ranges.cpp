class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        int n=nums.size();
        vector<string>ans;
        if(n==1){
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        
        int left=0,right=0;
        while(right<n){
            left=right;
            while(right<n-1 && nums[right+1]==nums[right]+1){
                right++;
            }
            string s;
            if(left!=right){
                 s=to_string(nums[left])+"->"+to_string(nums[right]);
            }
            else {
                s= to_string(nums[left]);
            }
            ans.push_back(s);   
            right++;     

        }
        return ans;
        
    }
};