class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<array<int,3>>sortedTask;
        for(int i=0;i<tasks.size();i++){
            int startTime=tasks[i][0];
            int processingTime=tasks[i][1];
            sortedTask.push_back({startTime,processingTime,i});
        }
        sort(sortedTask.begin(),sortedTask.end());
        vector<int>result;
        long long curr_time=0;
        int idx=0;
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<> >pq;
        while(idx<tasks.size() || !pq.empty()){
            if(pq.empty() && curr_time<sortedTask[idx][0]){
                curr_time=sortedTask[idx][0];
            }
            while(idx<tasks.size() && sortedTask[idx][0]<=curr_time){
                pq.push({sortedTask[idx][1],sortedTask[idx][2]});
                idx++;
            }
            pair<int,int>curr_task=pq.top();
            pq.pop();
            curr_time+=curr_task.first;
            result.push_back(curr_task.second);
        }
        return result;
    }
};