class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>umap1,umap2;
        if(s.size() != t.size())
            return false;
        for(int i=0;i<s.size();i++)
            umap1[s[i]]++;
        
        for(int i=0;i<s.size();i++)
            umap2[t[i]]++;
        
        for(auto it = umap1.begin();it!=umap1.end();it++){
            auto temp = umap2.find(it->first);
            if(temp != umap2.end() && (temp->first == it->first && temp->second == it->second)){
                umap2.erase(temp);
                continue;
            }
            return false;
        }
        return true;
    }
};