class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {

        map<int, int>m;

        int n=tickets.size();
        for(int i=0;i<n;i++){
            m[i]=tickets[i];
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int time=0;
        while(!q.empty()){
            int index=q.front();
            m[index]=m[index]-1;
            time++;
            if(index==k && m[index]==0) return time;
            if(m[index]>0)q.push(index);
            q.pop();
        }
        return -1;
        
    }
};