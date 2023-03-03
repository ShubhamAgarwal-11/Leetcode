class Solution {
public:
    int strStr(string haystack, string needle) {
        int j;
        for(int i=0;i<haystack.size();i++){
            for(j=0;j<needle.size();j++){
                if(haystack[j+i] != needle[j]){
                    break;
                }
            }
            if(j == needle.size())
                return i;
        }
        return -1;
    }
};