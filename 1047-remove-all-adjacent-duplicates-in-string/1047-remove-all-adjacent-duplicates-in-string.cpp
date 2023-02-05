class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(stk.empty() || stk.top() != s[i]){
                stk.push(s[i]);
            }else{
                stk.pop();
            }
        }
        
        string ans = "";
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};