class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int,int>ans;
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
       int res;
        int maxx=0;
        for(auto it=ans.begin();it!=ans.end();it++){
            if(it->second>maxx){
                maxx=it->second;
                res=it->first;
            }
        }
        return res;
    }
};