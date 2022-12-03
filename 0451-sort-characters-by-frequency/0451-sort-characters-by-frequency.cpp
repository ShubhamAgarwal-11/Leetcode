class Solution {
public:
    bool static sortByVal(const pair<int,char>&a , const pair<int,char>&b){
        return a.first>b.first;
    }
    string frequencySort(string s) {
        unordered_map<char,int>umap;
        
        vector<pair<int,char>>vec;
        for(int i=0;i<s.length();i++){
            umap[s[i]]++;
        }
        for(auto x : umap){
            vec.push_back(make_pair(x.second,x.first));
        }
        string ans="";
        sort(vec.begin(),vec.end(),sortByVal);
        for(int i=0;i<vec.size();i++){
            auto temp=umap.find(vec[i].first);
            for(int j=0;j<vec[i].first;j++)
                ans+=vec[i].second;
        }
        return ans;
    }
};