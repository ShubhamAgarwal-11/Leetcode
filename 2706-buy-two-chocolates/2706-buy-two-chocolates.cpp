class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int small = INT_MAX;
        int second_small = INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(small >= prices[i]){
                second_small = small;
                small = prices[i];
            }else if(second_small > prices[i]){
                second_small = prices[i];
            }
        }
        int total_money = small+second_small;
        if(total_money <= money)
            return money-total_money;
        return money;
    }
};