class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || nums[i-1] != nums[i]){
                int low= i+1,high= nums.size()-1;
                int sum= 0-nums[i];
                while(low<high){
                    vector<int>temp;
                    if(nums[low]+nums[high] == sum){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        
                        ans.push_back(temp);
                        
                        while(low<high && nums[low] == nums[low+1]) low++;
                        while(low<high && nums[high] == nums[high-1]) high--;
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<sum)
                        low++;
                    else
                        high--;
                }
            }
        }
        return ans;
    }
};