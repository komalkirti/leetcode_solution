class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0||n==1) return n;

        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(int num: s){

            if(s.find(num-1)==s.end()){

                int curNum=num+1;
                int length=1;
                while(s.find(curNum)!=s.end()){
                    curNum++;
                    length++;
                }
                ans=max(ans,length);


            }
        }
        return ans;

       
    }
};