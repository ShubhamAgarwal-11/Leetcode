class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int size=queries.size();
        vector<int>ans;
        int j=0;
        sort(nums.begin(),nums.end());
        while(j<queries.size()){
            int sum=0,count=0,i=0;
             while((i+1<=nums.size()) && (sum+nums[i]<=queries[j])){
                sum+=nums[i];
                i++;
                ++count;
            }
            j++;
            ans.push_back(count);
        }
        return ans;
    }
};