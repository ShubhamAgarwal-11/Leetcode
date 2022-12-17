class Solution {
public:
    long evaluate(long a,long b,string x){
        if(x == "+")
            return a+b;
        else if(x == "-")
            return a-b;
        else if(x == "*")
            return a*b;
        else if(x == "/")
            return a/b;
        return 0;
    }
    int evalRPN(vector<string>& tokens) {
        stack<long>element;
        for(auto &x : tokens){
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                long a=element.top();
                element.pop();
                
                long b=element.top();
                element.pop();
                
                long ans = evaluate(b,a,x);
                element.push(ans);
            }else
                element.push(stoi(x));
        }
        return element.top();
    }
};