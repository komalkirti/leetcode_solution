class Solution {
public:
   
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int s=0,e=n-1;
        if(n==1 && nums[0]==target) return 0;
        if(n==1 && nums[0]!=target) return -1;

        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target) return mid;

            if(nums[mid]>=nums[s]){  // left half sorted 

                if(target>=nums[s] && target<nums[mid]){
                    e=mid-1;
                }
                else s=mid+1;
            }
            else{
                // right side sorted 

                if(target> nums[mid] && target<=nums[e]){
                    s=mid+1;
                }
                else e=mid-1;
            }
        }
        return -1;


    }
};