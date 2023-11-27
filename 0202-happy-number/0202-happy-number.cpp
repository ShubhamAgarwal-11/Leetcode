class Solution {
public:
    int nextNum(int n){
        int r,newNum=0;
        while(n){
            r = n%10;
            newNum = newNum+(r*r);
            n = n/10;
        }
        return newNum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = nextNum(n);
        while(fast != 1 && fast != slow){
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
        }
        if(fast == 1)
            return true;
        return false;
    }
};