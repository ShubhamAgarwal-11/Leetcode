class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(count == 0)
                ans++;
            if(s[i] == 'R')
                count++;
            else if(s[i] == 'L')
                count--;
        }
        return ans;
    }
};