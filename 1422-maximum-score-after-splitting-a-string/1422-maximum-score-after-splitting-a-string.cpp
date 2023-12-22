class Solution {
public:
    int maxScore(string s) {
        int max = INT_MIN;
        
        for(int i=1;i<s.size();i++){
            int zero =0,one =0;
            for(int j=0;j<i;j++)
                if(s[j] == '0') zero++;
            for(int j=i;j<s.size();j++)
                if(s[j] == '1') one++;
            if(zero+one > max)
                max = zero+one;
        }
        return max;
    }
};