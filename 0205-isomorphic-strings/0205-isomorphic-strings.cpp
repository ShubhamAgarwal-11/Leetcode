class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>umap1;
        unordered_map<char,char>umap2;
        
        for(int i=0;i<s.size();i++){
            char ch1 = s[i];
            char ch2 = t[i];
            if(umap1.find(ch1) != umap1.end() && umap1[ch1]!= ch2 || umap2.find(ch2) != umap2.end() && umap2[ch2] != ch1){
                return false;
            }
            umap1[ch1] = ch2;
            umap2[ch2] = ch1;
        }
        return true;
    }
};