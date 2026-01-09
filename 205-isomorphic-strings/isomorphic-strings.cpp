class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        if(s.size()!=t.size())return false;
        map<char,char>mp;
        map<char,char>mp2;

        for(int i=0;i<n;i++){
           if(mp.find(s[i])==mp.end()){
            mp[s[i]]=t[i];
           }
           if(mp2.find(t[i])==mp2.end()){
            mp2[t[i]]=s[i];
           }
            if(t[i]!=mp[s[i]])return false;
            if(s[i]!=mp2[t[i]]) return false;
           }
        
        return true;
    
    }
};