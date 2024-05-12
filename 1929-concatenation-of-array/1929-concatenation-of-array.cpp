class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int q = nums.size();
        int p = 0;
        while(p != q){
            nums.push_back(nums[p]);
            p++;
        }
        return nums;
    }
};