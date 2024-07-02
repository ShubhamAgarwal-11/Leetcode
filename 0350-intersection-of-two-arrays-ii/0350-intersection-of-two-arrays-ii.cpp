class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>umap;
        for(int i=0;i<nums1.size();i++){
            umap[nums1[i]]++;
        }
        
        vector<int>result;
        for(int i=0;i<nums2.size();i++){
            auto temp = umap.find(nums2[i]);
            if(temp!= umap.end() && temp->second != 0){
                temp->second--;
                result.push_back(temp->first);
            }
        }
        return result;
    }
};