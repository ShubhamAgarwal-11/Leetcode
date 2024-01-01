class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0,count=0;
        int n = g.size(),m = s.size();
        while(1){
            if(i == n || j == m) break;
            if(g[i] <= s[j]){
                count++;
                i++; j++;
            }else if(g[i] > s[j]){
                j++;
            }
        }
        return count;
    }
};