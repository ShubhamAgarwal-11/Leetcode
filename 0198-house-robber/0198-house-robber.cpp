class Solution {
public:
    int t[101];
    int help(vector<int>nums,int i){
        if(i>=nums.size())
            return 0;
        if(t[i]!=-1){
            return t[i];
        }
        int get=nums[i]+help(nums,i+2);
        int skip=help(nums,i+1);
        t[i]=max(get,skip);
        return t[i];
    }
    int rob(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return help(nums,0);
    }
};