class Solution {
public:
    int minOperations(string s) {
        string temp1="",temp2="";
        for(int i=0;i<s.size();i++){
            if(i%2 == 1){
                temp1+='0';
                temp2+='1';
            }else{
                temp1+='1';
                temp2+='0';
            }
        }
        int ans1=0,ans2=0;
        for(int i=0;i<s.size();i++){
            if(s[i] != temp1[i])
                ans1++;
            if(s[i] != temp2[i])
                ans2++;
        }
        return min(ans1,ans2);
    }
};