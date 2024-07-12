class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        for(int i=0;i<nums.size();i++){
            total*=nums[i];
        }
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                result.push_back(total/nums[i]);
            }else{
                int temp=1;
                for(int j=0;j<nums.size();j++){
                    if(j!=i){
                        temp = temp*nums[j];
                    }
                }
                result.push_back(temp);
            }
        }
        return result;
    }
};