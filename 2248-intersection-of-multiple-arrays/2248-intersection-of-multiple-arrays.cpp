class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>freq(1001,INT_MAX);
        for(auto &num : nums){
            vector<int>temp(1001,0);
            for(auto &x : num){
                temp[x]++;
            }
            
            for(int i=0;i<1001;i++){
                freq[i] = min(freq[i],temp[i]);
            }
        }
        vector<int>result;
        for(int i=0;i<1001;i++){
            if(freq[i]){
                result.push_back(i);
            }
        }
        return result;
    }
};