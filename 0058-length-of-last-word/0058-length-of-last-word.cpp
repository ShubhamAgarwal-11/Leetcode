class Solution {
public:
    int lengthOfLastWord(string s) {
        int i= s.size()-1;
        int count=0;
        while(i>=0){
            if(count == 0 && s[i] == ' ' ){
                i--;   continue;
            }
            else if(s[i] != ' ')
                count++;
            else if(s[i] == ' ' && count !=0)
                return count;
            i--;
        }
        return count;
    }
};