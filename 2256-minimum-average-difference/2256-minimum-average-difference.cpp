class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long>prefix;
        for(int i=0;i<nums.size();i++){
            if(i ==0)
                prefix.push_back(nums[i]);
            else
                prefix.push_back(prefix[i-1]+nums[i]);
        }
        vector<long>ans;
        for(int i=0;i<prefix.size();i++){
            long x= (prefix[i]/(i+1));
            long y= ((prefix[prefix.size()-1] -                                                                      prefix[i]));
            int z= prefix.size()-(i+1);
            if(z==0)
                ans.push_back(abs(x-y));
            else
                ans.push_back(abs(x-(y/z)));
        }
        int j=0,min=ans[0];
        for(int i=0;i<ans.size();i++){
            if(min>ans[i]){
                min=ans[i];
                j=i;
            }
        }
        return j;
    }
};