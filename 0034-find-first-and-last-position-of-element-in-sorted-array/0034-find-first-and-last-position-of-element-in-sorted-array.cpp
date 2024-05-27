class Solution {
public:
    int firstOccr(vector<int>&nums,int target){
        int leftMost = -1;
        int start = 0;
        int end = nums.size()-1;
        int mid;
        
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] == target){
                leftMost = mid;
                end = mid-1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                start = mid +1;
            }
        }
        return leftMost;   
    }
    int lastOccr(vector<int>&nums, int target){
        int rightMost = -1;
        int start = 0;
        int end = nums.size()-1;
        int mid;
        
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] == target){
                rightMost = mid;
                start = mid+1;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                start = mid +1;
            }
        }
        return rightMost;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = firstOccr(nums,target);
        int right = lastOccr(nums,target);
        return {left,right};
    }
};