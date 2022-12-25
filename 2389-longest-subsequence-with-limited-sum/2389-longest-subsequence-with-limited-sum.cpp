// class Solution {
// public:
    
//     O(n*m)
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         int size=queries.size();
//         vector<int>ans;
//         int j=0;
//         sort(nums.begin(),nums.end());
//         while(j<queries.size()){
//             int sum=0,count=0,i=0;
//              while((i+1<=nums.size()) && (sum+nums[i]<=queries[j])){
//                 sum+=nums[i];
//                 i++;
//                 ++count;
//             }
//             j++;
//             ans.push_back(count);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int BinarySearch(vector<int>&prefix,int target){
        int lb=0,ub=prefix.size()-1;
        int mid,result=-1;
        while(lb<=ub){
            mid=(lb+ub)/2;
            if(prefix[mid]<=target){
                result=mid;
                lb=mid+1;
            }else
                ub=mid-1;
        }
        return result+1;
    }
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];
        }
        
        for(int i=0;i<queries.size();i++){
            int smallAns=BinarySearch(nums,queries[i]);
            ans.push_back(smallAns);
        }
        return ans;
    }
};