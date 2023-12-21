class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int max = INT_MIN;
        for(int i=1;i<points.size();i++){
            if(points[i][0]-points[i-1][0] > max)
                max = points[i][0]-points[i-1][0];
        }
        return max;
    }
};