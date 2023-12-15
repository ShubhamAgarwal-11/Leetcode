class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>umap;
        
        for(int i=0;i<paths.size();i++){
            for(int j=0;j<paths[i].size();j++){
                umap[paths[i][j]]++;
            }
        }
        
        vector<string>element;
        for(auto it = umap.begin();it!=umap.end();it++){
            if(it->second == 1)
                element.push_back(it->first);
        }
        
        for(int i=0;i<paths.size();i++){
            if(element.back() == paths[i][0])
                return element[0];
        }
        return element.back();
    }
};