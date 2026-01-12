class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i=0,j=0;
        int n=t.size();
        int m=s.size();

        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            if(s[i]!=t[j])j++;
        }
        if(i==m) return true;
        else return false;
        
    }
};