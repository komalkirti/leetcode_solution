class Solution {
public:
    void reverse(vector<int>&rev,int s,int e){
        int i=s,j=e;
        while(i<j){
            int s=rev[i];
            rev[i]=rev[j];
            rev[j]=s;
            i++;
            j--;
        }

    }

    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0) return ;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
        
    }
};