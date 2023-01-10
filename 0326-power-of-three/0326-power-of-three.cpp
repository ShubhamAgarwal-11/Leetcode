//           approach 1
// class Solution {
// public:
//     bool solve(int num,long long ans){
//         if(num < ans){ return false; }
//         if(num == ans) { return true; }
//         return solve(num,ans*3);
//     }
//     bool isPowerOfThree(int n) {
//         return solve(n,1);
//     }
// };


//           approach 2
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) { return false; }
        if(n == 1) { return true; }
       
        while(n%3 == 0)
            n=n/3;
        if(n == 1)
            return true;
        return false;
    }
};