class Solution {
public:
    bool detectCapitalUse(string word) {
        int count1=0,count2=0,count11=0,count22=0;
        if(word[0]>=65 && word[0]<=90)
            count11++;
        if(word[0]>=97 && word[0]<=122)
            count22++;
        for(int i=1;i<word.length();i++){
            if(word[i]>=65 && word[i]<=90)
                count1++;
            else if(word[i]>=97 && word[i]<=122)
                count2++;
        }
        if(count1 == word.size()-1 && count11)
            return true;
        else if(count2 == word.size()-1 && count22)
            return true;
        else if(count2 == word.size()-1 && count11)
            return true;
        return false;
    }
};