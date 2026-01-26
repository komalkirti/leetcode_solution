class Solution {
public:
    void swap(int a,int b,vector<int>& nums){

        int s=nums[a];
        nums[a]=nums[b];
        nums[b]=s;
    }
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,mid=0,high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(mid,low,nums);
                mid++;
                low++;
            }
            else if (nums[mid]==1) mid++;
            else {
                swap(mid,high,nums);
                high--;
            }
        }
        
    }
};