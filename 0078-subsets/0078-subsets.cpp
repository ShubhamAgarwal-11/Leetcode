class Solution {
public:
    void subset(vector<int>nums,vector<vector<int>>&ans,vector<int>temp){
        if(nums.size()== 0){
            ans.push_back(temp);
            return;
        }
        int n= nums[0];
        nums.erase(nums.begin());
        subset(nums,ans,temp);
        temp.push_back(n);
        subset(nums,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        subset(nums,ans,temp);
        return ans;
    }
};