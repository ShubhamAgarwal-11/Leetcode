class Solution {
public:
    int solve(vector<int>&capacity,vector<int>&rocks,int additional){
        vector<int>temp;
        for(int i=0;i<capacity.size();i++){
            temp.push_back(capacity[i]-rocks[i]);
        }
        sort(temp.begin(),temp.end());
        int i=0;
        while((i<temp.size()) && (temp[i]<=additional)){
            additional-=temp[i];
            i++;
        }
        return i;
    }
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans=solve(capacity,rocks,additionalRocks);
        return ans;
        
    }
};