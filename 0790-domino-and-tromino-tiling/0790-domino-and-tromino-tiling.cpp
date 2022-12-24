class Solution {
public:
    int numTilings(int n) {
        vector<long long>vec(1001,0);
        long mod=1e9+7;
        vec[1]=1;
        vec[2]=2;
        vec[3]=5;
        if(n<=3)
            return vec[n];
        for(int i=4;i<=n;i++){
            vec[i]=2*vec[i-1]+vec[i-3];
            vec[i]=vec[i]%mod;
        }
        return vec[n];
    }
};