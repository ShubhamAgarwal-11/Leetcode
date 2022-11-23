class Solution {
public:
    void convertString(string&s){
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int j=0;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || s[i]>= 48 && s[i]<= 57){
                s[j]=s[i];
                j++;
            }else{
                s.erase(i,1);
                i--;
            }
        }
    }
    bool isPalindrome(string s) {
        convertString(s);
        int low=0,high=s.size()-1;
        while(low<=high){
           if(s[low]!=s[high])
               return false;
            low++;
            high--;
        }
        return true;
    }
};