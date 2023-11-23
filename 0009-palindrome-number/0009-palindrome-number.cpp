class Solution {
public:
    bool isPalindrome(int y) {
        long long num=0;
        if(y <0){
            return false;
        }
        else{
            int r,x = y;
            while(x){
                r = x%10;
                x = x/10;
                num = num*10+r;
            }
        }
        if((num - y) == 0)
            return true;
        return false;
    }
};