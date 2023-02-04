class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        
        vector<pair<string,int>>vec;
        
        for(auto &it : mp){
            vec.push_back({it.first,it.second});
        }
        
        auto lambda = [](pair<string,int>&p1,pair<string,int>&p2){
            if(p1.second == p2.second)
                return p1.first<p2.first;
            return p1.second>p2.second;
        };
        sort(vec.begin(),vec.end(),lambda);
        
        int i=0;
        vector<string>result;
        while(i<k){
            result.push_back(vec[i].first);
            i++;
        }
        return result;
    }
};