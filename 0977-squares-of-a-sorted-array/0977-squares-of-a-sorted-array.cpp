class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int>result(nums.size());
        int index = nums.size()-1;
        while(index >= 0){
            int sqr1 = nums[i]*nums[i];
            int sqr2 = nums[j]*nums[j];
            
            if(sqr1 < sqr2){
                result[index] = sqr2;
                j--;
            }else{
                result[index] = sqr1;
                i++;
            }
            index--;
        }
        return result;
    }
};