class Solution {
public:
    bool checkPowersOfThree(int n) {
        int temp =0 , num=0 , i=0;
        while(1){
            if(pow(3,i)>=n){
                temp = i;
                break;
            }
            i++;
        }
        for(int i=temp;i>=0;i--){
            if(n == 0)
                return true;
            if(pow(3,i)<=n)
                n = n - pow(3,i);
        }
        return (n == 0);
    }
};