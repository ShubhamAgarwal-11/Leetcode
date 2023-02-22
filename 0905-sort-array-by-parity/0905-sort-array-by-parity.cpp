class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        
        for(int i=0;i<nums.size();i++){
            if((nums[i]&1) == 1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        
        // concatenate vector
        
        even.insert(even.end(),odd.begin(),odd.end());
        return even;
    }
};