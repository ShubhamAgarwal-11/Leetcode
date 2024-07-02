class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1;
        set<int>s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        
        vector<vector<int>>result;
        vector<int>temp;
        for(int i=0;i<s1.size();i++){
            if(s2.find(*next(s1.begin(),i)) == s2.end()){
                temp.push_back(*next(s1.begin(),i));
            }
        }
        result.push_back(temp);
        temp.clear();
        
        for(int i=0;i<s2.size();i++){
            if(s1.find(*next(s2.begin(),i)) == s1.end()){
                temp.push_back(*next(s2.begin(),i));
            }
        }
        
        result.push_back(temp);
        return result;
    }
};