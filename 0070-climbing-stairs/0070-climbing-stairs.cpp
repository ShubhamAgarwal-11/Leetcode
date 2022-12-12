class Solution {
public:
    int v[46];
    int help(int n){
        if(n == 0)
            return 1;
        if(n<0)
            return 0;
        if(v[n]!=-1)
            return v[n];
        int ans1= help(n-1);
        int ans2=help(n-2);
        v[n]=ans1+ans2;
        return v[n];
    }
    int climbStairs(int n) {
        memset(v,-1,sizeof(v));
        return help(n);
    }
};