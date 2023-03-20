class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int n) {
        int size = nums.size();
        if(n == 0)
            return true;
        for(int i=0;i<size;i++){
            if(nums[i] == 0){
                bool a = (i == 0) || (nums[i-1] == 0);
                bool b = (i == size-1) || (nums[i+1] == 0);
                if(a && b){
                    nums[i] = 1;
                    n--;
                    if(n == 0)
                        return true;
                }
            }
        }
        return false;
    }
};