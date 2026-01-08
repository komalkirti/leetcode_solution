class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        map<char,int>magmap;

        int n=magazine.size();
        for(int i=0;i<n;i++){
            magmap[magazine[i]]++;
        }
        int m=ransomNote.size();
        for(int i=0;i<m;i++){
            if(magmap.find(ransomNote[i])==magmap.end())return false;
            magmap[ransomNote[i]]--;
            if(magmap[ransomNote[i]]<0) return false;
        }
        return true;
    }
};