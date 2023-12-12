class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            int x = k - nums[i];
            auto temp = umap.find(x);
            if((umap.find(nums[i])->second>0) && (temp != umap.end())){
                umap.find(nums[i])->second--;
                if(temp->second>0){
                    count++;
                    temp->second--;
                }
            }
        }
        return count;
    }
};