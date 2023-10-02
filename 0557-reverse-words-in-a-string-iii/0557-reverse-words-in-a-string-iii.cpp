class Solution {
public:
    string reverseWords(string s) {
        string ans="",temp="";
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=' ';
                temp.clear();
            }else{
                temp.push_back(s[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};