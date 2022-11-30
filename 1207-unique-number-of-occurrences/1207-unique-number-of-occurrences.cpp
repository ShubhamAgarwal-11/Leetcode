class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>umap;
        for(auto x : arr)
            umap[x]++;
        set<int>s;
        for(auto x : umap){
            if(s.count(x.second))
                return false;
            s.insert(x.second);
        }
        return true;
    }
};