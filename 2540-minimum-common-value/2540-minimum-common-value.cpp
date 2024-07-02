class Solution {
public:
    bool binarySearch(vector<int>&nums,int target){
        int start=0,end=nums.size()-1;
        int mid;
        while(start <= end){
            mid = (start+end)/2;
            if(nums[mid] == target)
                return true;
            else if(nums[mid] > target)
                end = mid-1;
            else
                start = mid+1;
        }
        return false;
    }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums1.size();i++){
            if(binarySearch(nums2,nums1[i])){
                return nums1[i];
            }
        }
        return -1;
    }
};