class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int>s;
        map<int,int>m;

        int n=nums2.size();

        for(int i=0;i<n;i++){

            while(!s.empty() && s.top()<nums2[i]){
                m[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }

        vector<int>ans;

        for(int i=0;i<nums1.size();i++){
            if(m.find(nums1[i])!=m.end()){
                ans.push_back(m[nums1[i]]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};