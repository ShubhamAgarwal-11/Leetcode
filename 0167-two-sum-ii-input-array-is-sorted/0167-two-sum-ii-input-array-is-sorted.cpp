class Solution {
public:
    int helper(vector<int>&numbers,int target,int current_index){
        int start=0,end=numbers.size()-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(numbers[mid]==target && mid!=current_index)
                return mid;
            else if(numbers[mid]>target)
                end=mid-1;
            else
                start=mid+1;
            mid=start+(end-start)/2;
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        for(int i=0;i<numbers.size();i++){
            int x=helper(numbers,target-numbers[i],i);
            if(x!=-1){
                ans.push_back(i+1);
                ans.push_back(x+1);
                return ans;
            }
        }
        return ans;
    }
};