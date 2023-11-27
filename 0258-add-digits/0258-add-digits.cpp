class Solution {
public:
    int addDigit(int num){
        int r,newNum=0;
        while(num){
            r = num%10;
            newNum = newNum+r;
            num = num/10;
        }
        return newNum;
    }
    int addDigits(int num) {
        while(1){
            if(num>=0 && num<=9)
                return num;
            else
                num = addDigit(num);
        }
    }
};