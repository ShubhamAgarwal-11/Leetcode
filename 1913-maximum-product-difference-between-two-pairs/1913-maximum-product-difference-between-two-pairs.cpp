class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int large = INT_MIN;
        int second_large = INT_MIN;
        int small = INT_MAX;
        int second_small = INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            
            //find pair of largest element;
            if(nums[i] >= large){
                second_large = large;
                large = nums[i];
            }else if(nums[i]>second_large)
                second_large = nums[i];
            
            // find pair of smallest element;
            if(nums[i] <= small){
                second_small = small;
                small = nums[i];
            }else if(nums[i] < second_small)
                second_small = nums[i];
        }
        return((large*second_large)-(small*second_small));
    }
};

//                       O(nlogn)
// class Solution {
// public:
//     int maxProductDifference(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int a = nums[nums.size()-1];
//         int b = nums[nums.size()-2];
//         int c = nums[0];
//         int d = nums[1];
//         return((a*b)-(c*d));
//     }
// };