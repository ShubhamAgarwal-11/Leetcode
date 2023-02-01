class Solution {
public:
    int kthFactor(int n, int k) {
        // vector<int>ans;
        int count=0;
        for(int i=1;i<=n;i++){
            if(n%i == 0){
                count++;
                if(count == k)
                    return i;
            }
        }
        
        // if(ans.size()>=k){
        //     return ans[k-1];
        // }
        return -1;
    }
};