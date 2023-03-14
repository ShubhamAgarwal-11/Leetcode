class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums.size();i++){
            umap[nums[i]]++;
        }
        
        vector<pair<int,int>>vec;
        for(auto it = umap.begin();it!=umap.end();it++){
            vec.push_back({it->second,it->first});
        }
        
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            auto temp = vec.back();
            vec.pop_back();
            ans.push_back(temp.second);
        }
        return ans;
        
    }
};