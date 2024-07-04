class Solution {
public:
    int scoreOfString(string s) {
        int i=0,j=1;
        int sum=0;
        while(j<s.size()){
            int diff = int(s[i])-int(s[j]);
            sum+=abs(diff);
            i++;j++;
        }
        return sum;
    }
};