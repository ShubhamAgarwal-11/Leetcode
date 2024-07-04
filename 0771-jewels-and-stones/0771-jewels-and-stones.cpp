class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>umap;
        for(int i=0;i<stones.size();i++){
            umap[stones[i]]++;
        }
        int result=0;
        for(auto x : jewels){
            auto temp = umap.find(x);
            if(temp != umap.end()){
                result += temp->second;
            }
        }
        return result;
    }
};