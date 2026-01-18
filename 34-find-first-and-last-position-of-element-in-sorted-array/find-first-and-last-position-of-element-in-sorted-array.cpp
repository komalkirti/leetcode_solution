class Solution {
public:

    int getOcc(vector<int>nums,int s,int e,int target, bool isFirstOcc){

        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]>target)e=mid-1;
            else if(nums[mid]<target)s=mid+1;
            else if (nums[mid]==target){
                if(isFirstOcc){
                    if(mid==s || nums[mid-1]!=target)return mid;
                    else e=mid-1;
                }
                else{
                    if(mid==e || nums[mid+1]!=target) return mid;
                    else s=mid+1;
                    
                }
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        int s=0,e=nums.size()-1;
        vector<int>ans(2);
        int firstOcc = getOcc(nums,s,e,target,true);
        if(firstOcc ==-1){
            ans[0]=-1;
            ans[1]=-1;
            return ans;
        }
        int lastOcc = getOcc(nums,s,e,target,false);
        ans[0]=firstOcc;
        ans[1]=lastOcc;
        return ans;
        
        
    }
};