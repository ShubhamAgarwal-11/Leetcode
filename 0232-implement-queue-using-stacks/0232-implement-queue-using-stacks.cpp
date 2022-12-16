class MyQueue {
public:
    stack<int>input;
    stack<int>output;
    int peekElement=-1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.size() == 0)
            peekElement=x;
        input.push(x);
    }
    
    int pop() {
        int ans;
        if(output.size()!=0){
            ans=output.top();
            output.pop();
            return ans;
        }
        int size=input.size();
        for(int i=0;i<size;i++){
            output.push(input.top());
            input.pop();
        }
        ans=output.top();
        output.pop();
        return ans;
    }
    
    int peek() {
        if(output.size() == 0)
            return peekElement;
        return output.top();
    }
    
    bool empty() {
       if(input.size() ==0 && output.size()==0)
           return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */