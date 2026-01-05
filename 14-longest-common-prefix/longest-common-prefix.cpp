class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n=strs.size();
        string ans="";
        int k=0;
        int length=strs[0].size();
        bool flag=true;
        while(k<length){
            char ch=strs[0][k];
            for(int i=1;i<n;i++){
                if(strs[i][k]!=ch){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                ans=ans+ch;
                k++;
            }
            else break;

        }
        return ans;
        
    }
};