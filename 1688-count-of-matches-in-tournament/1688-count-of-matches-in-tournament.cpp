class Solution {
public:
    int numberOfMatches(int n) {
        int team = 0,match = 0;
        while(n != 1){
            if(n % 2 == 0){
                match+= n/2;
                team = n/2;
            }else{
                match+= (n-1)/2;
                team = ((n-1)/2)+ 1;
            }
            n = team;
        }
        return match;
    }
};