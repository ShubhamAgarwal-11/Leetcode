class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        
        unordered_map<int,int>umap;
        for(int i=0;i<nums1.size();i++){
            umap[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++){
            auto temp = umap.find(nums2[i]);
            if(temp != umap.end()){
                result.push_back(nums2[i]);
                umap.erase(temp);
            }
        }
        return result;
    }
};