class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0;
        int totalCost=0;
        for(int i=0;i<gas.size();i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
        }
        if(totalGas<totalCost)
            return -1;
        int total=0,ans=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i]-cost[i];
            if(total<0){
                total=0;
                ans=i+1;
            }
        }
        return ans;
    }
};