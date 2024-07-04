class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        stack<string>st;
        int i=0,n=s.size();
        while(i<n){
            if(s[i] != ' '){
                temp+=s[i];
            }else{
                if(temp.size()){
                    st.push(temp);
                    temp="";
                }
            }
            i++;
        }
        if(temp.size()){
            st.push(temp);
        }
        
        string result="";
        result+=st.top();
        st.pop();
        while(st.size()){
            result+=" ";
            result+=st.top(); 
            st.pop();
        }
        return result;
    }
};