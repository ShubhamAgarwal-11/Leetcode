class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        for(int i=0;i<intervals.size();i++){
            if(result.size() == 0)
                result.push_back(intervals[i]);
            else{
                vector<int>&vec = result.back();
                // overlapping case
                if(vec[1]>=intervals[i][0])
                    vec[1] = max(vec[1],intervals[i][1]);
                else
                    result.push_back(intervals[i]);
            }
        }
        return result;
    }
};