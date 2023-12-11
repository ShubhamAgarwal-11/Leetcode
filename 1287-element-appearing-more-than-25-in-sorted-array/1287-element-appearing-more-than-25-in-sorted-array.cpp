class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>umap;
        for(int i=0;i<arr.size();i++)
            umap[arr[i]]++;
        int max = INT_MIN,element=0;
        for(auto it = umap.begin();it != umap.end();it++){
            if(it->second>max){
                max = it->second;
                element = it->first;
            }
        }
        return element;
    }
};