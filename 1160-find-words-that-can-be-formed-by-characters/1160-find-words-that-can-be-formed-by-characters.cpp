class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>umap;
        for(int i=0;i<chars.size();i++)
            umap[chars[i]]++;
        int count =0;
        for(int i=0;i<words.size();i++){
            unordered_map<char,int>umap1;
            bool flag = false;
            for(auto&x : words[i])
                umap1[x]++;
            for(auto it = umap1.begin();it!= umap.end();it++){
                auto temp = umap.find(it->first);
                if(temp != umap.end()){
                    if(it->first == temp->first && it->second <= temp->second)
                        continue;
                }
                flag = true;
                break;
            }
            if(flag == false){
                // cout<<words[i]<<"  ";
                count+=words[i].size();
            }
        }
        return count;
    }
};