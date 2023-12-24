class Solution {
public:
    int reverse(int x) {
        bool sign = false;
        long long int y=x;
        if(x < 0){
            sign = true;
            y = y*(-1);
        }
        long long int r,num=0;
        while(y){
            r = y%10;
            y = y/10;
            if(2147483647< num*10)
                return 0;
            num = num*10+r;
        }
        if(sign)
            return num*-1;
        return num;
    }
};