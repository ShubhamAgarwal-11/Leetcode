class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score =0,max_score = 0;
        int i=0,j=tokens.size()-1;
        while(i<=j){
            if(score == 0){
                if(tokens[i]<=power){
                    power-=tokens[i];
                    score++;
                }else{
                    return 0;
                }
                i++;
            }else if(score>0){
                if(tokens[i]<=power){
                    power-=tokens[i];
                    score++;
                    i++;
                }else if(tokens[i]>power){
                    power+=tokens[j];
                    j--;
                    score--;
                }
            }
            max_score = max(max_score,score);
        }
        return max_score;
    }
};