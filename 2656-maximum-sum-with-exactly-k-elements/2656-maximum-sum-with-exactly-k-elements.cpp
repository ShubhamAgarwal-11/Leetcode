class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int temp=nums[nums.size()-1];
        int ans=0;
        for(int i=0;i<k;i++){
            ans+=temp;
            temp++;
        }
        return ans;
    }
};