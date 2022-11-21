class Solution {
public:
     
    bool BS(vector<int>&arr,int target){
        int s=0,e=arr.size()-1;
        int mid;
        while(s<=e){
            mid= s+(e-s)/2;
            if(arr[mid] == target)
                return true;
            else if(arr[mid] > target)
                e= mid-1;
            else
                s=mid + 1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>arr;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                arr.push_back(matrix[i][j]);
            }
        }
        
        return BS(arr,target);
    }
};