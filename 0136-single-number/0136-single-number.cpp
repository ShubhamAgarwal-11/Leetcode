class Solution {   //  Time:- O(n)  Space:- O(1)
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        
        for(int i=0;i<nums.size();i++)
            result^=nums[i];
        
        return result;
    }
};

//                      Time:- O(nlogn)   Space:- O(1)
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int i;
//         for(i=0;i<nums.size()-1;i++){
//             if(nums[i] != nums[i+1])
//                 return nums[i];
//             else
//                 i++;
//         }
//         return nums[i];
//     }
// };