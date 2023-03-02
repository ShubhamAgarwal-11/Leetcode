class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>result;
        stack<int>stk;
        for(int i=prices.size()-1;i>=0;i--){
            if(stk.empty()){
                result.push_back(prices[i]);
            }else if(stk.size()>0 && prices[i]>stk.top()){
                result.push_back(prices[i]-stk.top());
            }else if(stk.size()>0 && prices[i]<=stk.top()){
                while(stk.size()>0 && prices[i]<stk.top()){
                    stk.pop();
                }
                if(stk.size()<=0){
                    result.push_back(prices[i]);
                }else{
                    result.push_back(prices[i]-stk.top());
                }
            }
            stk.push(prices[i]);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};