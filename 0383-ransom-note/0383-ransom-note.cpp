class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>umap1;
        map<char,int>umap2;
        for(int i=0;i<ransomNote.size();i++){
            umap1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            umap2[magazine[i]]++;
        }
        for(auto it= umap1.begin();it!=umap1.end();it++){
            auto temp = umap2.find(it->first);
            if(it->first == temp->first && it->second<=temp->second)
                continue;
            else
                return false;
        }
        return true;
        
    }
};