class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>st;
        int max = 0;
        int start=0,end=0;
        
        while(start<s.size()){
            auto temp = st.find(s[start]);
            if(temp == st.end()){
                st.insert(s[start]);
                if(max < start-end+1)
                    max = start-end+1;
                start++;
            }else{
                st.erase(s[end]);
                end++;                
            }
        }
        return max;
    }
};