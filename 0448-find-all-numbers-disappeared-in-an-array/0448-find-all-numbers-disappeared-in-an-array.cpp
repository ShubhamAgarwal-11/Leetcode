class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto&x : nums)
            umap[x]++;
        vector<int>ans;
        for(int i=1;i<=nums.size();i++){
            if(umap.find(i) == umap.end())
                ans.push_back(i);
        }
        return ans;
    }
};