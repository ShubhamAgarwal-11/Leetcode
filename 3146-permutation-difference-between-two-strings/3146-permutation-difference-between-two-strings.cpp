class Solution {
public:
    int findIndex(string t,char ch){
        for(int i=0;i<t.size();i++){
            if(t[i] == ch)
                return i;
        }
        return 0;
    }
    int findPermutationDifference(string s, string t) {
        int i=0;
        int sum =0;
        while(i<s.size()){
            int diff = i - findIndex(t,s[i]);
            sum+=abs(diff);
            i++;
        }
        return sum;
    }
};