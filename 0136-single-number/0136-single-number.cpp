class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i] != nums[i+1])
                return nums[i];
            else
                i++;
        }
        return nums[i];
    }
};