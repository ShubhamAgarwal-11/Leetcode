class Solution {
public:
    bool solve(int num,long long ans){
        if(num < ans){ return false; }
        if(num == ans) { return true; }
        return solve(num,ans*3);
    }
    bool isPowerOfThree(int n) {
        return solve(n,1);
    }
};