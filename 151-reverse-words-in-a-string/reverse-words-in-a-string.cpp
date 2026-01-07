class Solution {
public:
    string reverseWords(string s) {

        int n=s.size();
        int i=0;
        vector<string>v;
        while(i<n){
            while(i<n && s[i]==' ')i++;
            string str="";
            while(i<n && s[i]!=' '){
                str+=s[i];
                i++;
            }
           if(str.size()>0) v.push_back(str);
        }
        int sz=v.size();
        string ans="";
        for(int i=sz-1;i>=0;i--){
            ans=ans+v[i];
             if(i!=0)ans=ans+' ';
        }
        return ans;
        
    }
};