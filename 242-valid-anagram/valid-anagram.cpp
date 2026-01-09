class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;

        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.find(t[i])==mp.end()) return false;
            else {
                if(mp[t[i]]<=0) return false;
                else mp[t[i]]--;
            }
        }
        return true;
    }
};