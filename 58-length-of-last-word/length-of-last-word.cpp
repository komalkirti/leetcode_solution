class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int k=n-1;
        int cnt=0;
        while(k>=0 && s[k]==' ')k--;
        // cout<<k<<endl;
        while(k>=0 && s[k]!=' '){
            k--;
            cnt++;
        }
        return cnt;
    }
};