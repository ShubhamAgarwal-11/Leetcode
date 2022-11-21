class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map<int,int>umap;
        // for(int i=0;i<nums.size();i++)
        //     umap[nums[i]]++;
        // for(auto it= umap.begin();it!= umap.end();it++)
        //     if(it->second>1)
        //         return true;
        // return false;
        
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size() ==  nums.size())
                return false;
        return true;
        
    }
};