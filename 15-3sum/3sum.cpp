class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            int target = 0-nums[i];
            int left=i+1,right=n-1;
            if(i>0 && nums[i]==nums[i-1])continue;
            while(left<right){
                if(nums[left]+nums[right]==target){
                    vector<int>v(3);
                    v[0]=nums[i];
                    v[1]=nums[left];
                    v[2]=nums[right];
                    if(ans.empty())ans.push_back(v);
                    else{
                        vector<int>prevAns=ans[ans.size()-1];
                        if(prevAns[0]==v[0] && prevAns[1]==v[1]&&prevAns[2]==v[2]);
                        else ans.push_back(v);
                    }
                    left++;
                    right--;
                }
                else if(nums[left]+nums[right]>target)right--;
                else left++;
            }
        }
        return ans;
        
    }
};