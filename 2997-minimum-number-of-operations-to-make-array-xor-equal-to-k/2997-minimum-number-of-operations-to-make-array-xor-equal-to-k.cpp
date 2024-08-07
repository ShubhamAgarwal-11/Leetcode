class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int Xor =0;
        for(int i=0;i<nums.size();i++){
            Xor ^= nums[i];
        }
        Xor^=k;
        return __builtin_popcount(Xor);
    }
};