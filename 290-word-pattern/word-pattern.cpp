class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }

        map<char,string>mpC;
        map<string,char>mpS;
        cout<<words.size()<<endl;
        if(pattern.size()!=words.size())return false;
        
        int n=pattern.size();
    
        for(int i=0;i<n;i++){
            if(mpC.find(pattern[i])==mpC.end()){
                mpC[pattern[i]]=words[i];
            }
            if(mpS.find(words[i])==mpS.end()){
                mpS[words[i]]=pattern[i];
            }
            if(mpC[pattern[i]]!=words[i])return false;
            if(mpS[words[i]]!=pattern[i]) return false;
        }
        return true;
    }
};