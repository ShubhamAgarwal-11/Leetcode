class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>result;
        int i=0,size = nums.size()-1;
        while(1){
            int index1 = 2*i;
            int index2 = 2*i+1;
            if(index2 > size)
                return result;
            for(int j=0;j<nums[index1];j++)
                result.push_back(nums[index2]);
            i++;
        }
        return result;
    }
};