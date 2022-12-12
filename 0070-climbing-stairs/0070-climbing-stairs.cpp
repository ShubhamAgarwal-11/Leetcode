class Solution {
public:
    // int v[46];
    // int help(int n){
    //     if(n == 0)
    //         return 1;
    //     if(n<0)
    //         return 0;
    //     if(v[n]!=-1)
    //         return v[n];
    //     int ans1= help(n-1);
    //     int ans2=help(n-2);
    //     v[n]=ans1+ans2;
    //     return v[n];
    // }
    // int climbStairs(int n) {
    //     memset(v,-1,sizeof(v));
    //     return help(n);
    // }
    
    int climbStairs(int n) {
        vector<int>v(n+1);
        if(n==1 || n==2)
            return n;
        v[0]=0;
        v[1]=1;
        v[2]=2;
        for(int i=3;i<=n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        return v[n];
    }
};