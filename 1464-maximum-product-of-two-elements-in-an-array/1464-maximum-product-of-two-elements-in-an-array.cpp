class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int result;
        result = (nums[nums.size()-2]-1)*(nums[nums.size()-1]-1);
        return result;
    }
};