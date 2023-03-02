class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        int size = s.size();
        for(int i=0;i<(size-3)+1;i++){
            int j=0;
            set<char>st;
            while(j!=3){
                st.insert(s[i+j]);
                j++;
            }
            if(st.size() == 3)
                count++;
        }
        return count;
    }
};