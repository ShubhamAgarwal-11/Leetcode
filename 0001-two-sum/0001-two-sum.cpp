class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            int newTarget = target-nums[i];
            auto temp = umap.find(newTarget);
            if(temp == umap.end()){
                umap[nums[i]] = i;
            }else{
                return {temp->second,i};
            }
        }
        return {};
    }
};