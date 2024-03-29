class Solution {
public:
    int search(vector<int>&nums,int target){
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target)
                return i;
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.empty())
                temp.push_back(-1);
            else if(!st.empty() && st.top() > nums2[i])
                temp.push_back(st.top());
            else if(!st.empty() && st.top()<= nums2[i]){
                while(!st.empty() && st.top() < nums2[i])
                    st.pop();
                if(st.empty())
                    temp.push_back(-1);
                else
                    temp.push_back(st.top());
            }
            st.push(nums2[i]);
        }
        reverse(temp.begin(),temp.end());
        vector<int>result;
        for(int i=0;i<nums1.size();i++){
            int index = search(nums2,nums1[i]);
            result.push_back(temp[index]);
        }
        return result;
    }
};