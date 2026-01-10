class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merged;
        int n=intervals.size();

        for(int i=0;i<n;i++){

            if(merged.empty() || merged.back()[1]<intervals[i][0]){
                merged.push_back(intervals[i]);
            }
            else{
                int endInterval = max(merged.back()[1],intervals[i][1]);
                merged.back()[1]=endInterval;
            }
        }
        return merged;
        
    }
};