class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>>umap;
        for(int i=0;i<str.size();i++){
            string temp = str[i];
            sort(temp.begin(),temp.end());
            umap[temp].push_back(str[i]);
        }
        vector<vector<string>>result;
        // for(auto it = umap.begin();it!= umap.end();it++){}
        for(auto x : umap){
            vector<string>temp;
            for(auto y : x.second)
                temp.push_back(y);
            result.push_back(temp);
        }
        return result;
    }
};