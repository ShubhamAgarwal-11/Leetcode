class Solution {
public:
    int maxScore(string s) {
        int one =0;
        for(int i=0;i<s.size();i++)
            if(s[i] == '1') one++;
        int zero=0;
        int maxx = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == '0')
                zero++;
            else
                one--;
            maxx = max(one+zero,maxx);
        }
        return maxx;
    }
};