class Solution {
public:
    int totalMoney(int n) {
        int result=0,monday=1;
        while(n>0){
            int money=monday;
            for(int i=1;i<=min(n,7);i++){
                result+=money;
                money++;
            }
            n = n-7;
            monday++;
        }
        return result;
    }
};