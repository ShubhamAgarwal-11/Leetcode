class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int>st;
        for(int i=0;i<matches.size();i++){
            st.insert(matches[i][0]);
        }
        set<int>losers;
        for(int i=0;i<matches.size();i++)
            losers.insert(matches[i][1]);
        vector<int>winners;
        vector<vector<int>>result;
        for(auto&x:st){
            if(losers.find(x) == losers.end())
                winners.push_back(x);
        }
        result.push_back(winners);
        map<int,int>mp;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][1]]++;
        }
        vector<int>lost_game_1;
        auto it = mp.begin();
        
        while(it != mp.end()){
            if(it->second == 1){
                lost_game_1.push_back(it->first);
                it->second =0;
            }
            it++;
        }
        sort(lost_game_1.begin(),lost_game_1.end());
        result.push_back(lost_game_1);
        return result;
    }
};