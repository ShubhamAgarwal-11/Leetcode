class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>umap;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        int duplicate,missing=0;
        int i=1;
        for(auto it = umap.begin();it!= umap.end();it++,i++){
            if(it->second == 2)
                duplicate = it->first;
            if(missing == 0 && it->first != i)
                missing =i;
            // cout<<missing<<"  ";
        }
        if(missing == 0)
            missing =i;
        return{duplicate,missing};
    }
};