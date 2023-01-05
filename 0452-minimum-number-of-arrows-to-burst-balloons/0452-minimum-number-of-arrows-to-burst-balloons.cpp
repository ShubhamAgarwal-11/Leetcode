class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<int>prev=points[0];
        int count=1;
        for(int i=1;i<points.size();i++){
            int currStartPoint=points[i][0];
            int currEndPoint=points[i][1];
            
            int prevStartPoint=prev[0];
            int prevEndPoint=prev[1];
            
            if(prevEndPoint < currStartPoint){
                count++;
                prev[0]=currStartPoint;
                prev[1]=currEndPoint;
            }else{ //Overlap
                prev[0]=max(prevStartPoint,currStartPoint);
                prev[1]=min(prevEndPoint,currEndPoint);
            }
        }
        return count;
    }
};