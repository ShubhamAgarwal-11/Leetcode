class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>umap1;
        map<char,int>umap2;
        for(int i=0;i<s.size();i++)
            umap1[s[i]]++;
        for(int i=0;i<t.size();i++)
            umap2[t[i]]++;
        int count=0;
        for(auto x : umap1){
            auto temp = umap2.find(x.first);
            if(temp != umap2.end() && temp->second == 0)
                umap2.erase(temp);
            if(temp != umap2.end()){
                if(x.second > temp->second){
                    x.second-=temp->second;
                    count+=temp->second;
                }
                else{
                    temp->second-= x.second;
                    count+=x.second;
                }
            }
        }
        return s.size()-count;
    }
};