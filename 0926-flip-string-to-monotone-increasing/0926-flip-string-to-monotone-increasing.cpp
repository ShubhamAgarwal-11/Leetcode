class Solution {
public:
    int n;
    
    int solve(string &s, int curr_index, int prev_val, vector<vector<int>>& t) {
        if(curr_index >= n)
            return 0;
        
        if(t[curr_index][prev_val] != -1)
            return t[curr_index][prev_val];
        
        int flip    = INT_MAX;
        int no_flip = INT_MAX;

        if(s[curr_index] == '0') {
            
            if(prev_val == 1) {
                flip = 1 + solve(s, curr_index+1, 1, t);
            } else {
                flip = 1 + solve(s, curr_index+1, 1, t);
                no_flip = solve(s, curr_index+1, 0, t);
            }
        }

        else if(s[curr_index] == '1')
        {
            if(prev_val == 1) {
                no_flip = solve(s, curr_index+1, 1, t);
            } else {
                flip    = 1 + solve(s, curr_index+1, 0, t);
                no_flip = solve(s, curr_index+1, 1, t);
            }
        }

        return t[curr_index][prev_val] =  min(flip, no_flip);
    }
    
    int minFlipsMonoIncr(string s) {
        n = s.length();
        
        vector<vector<int>> t(n+1, vector<int>(2, -1));
        
        return solve(s, 0, 0, t);
    }
};