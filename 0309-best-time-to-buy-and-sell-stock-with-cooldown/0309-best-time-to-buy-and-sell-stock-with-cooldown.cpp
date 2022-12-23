class Solution {
public:
    int dp[5001][2];
    int solve(vector<int>&prices,int day,int n,bool buy){
        if(day>=n)
            return 0;
        if(dp[day][buy]!=-1){
            return dp[day][buy];
        }
        int profit=0;
        if(buy){  //buy
            int take=solve(prices,day+1,n,false)-prices[day];
            int not_take=solve(prices,day+1,n,true);
            profit=max({profit,take,not_take});
        }else{  //sell
            int sell=prices[day]+solve(prices,day+2,n,true);
            int not_sell=solve(prices,day+1,n,false);
            profit=max({profit,sell,not_sell});
        }
        return dp[day][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(prices,0,n,true);
    }
};