class MyStack {
public:
    MyStack() {
        
    }
    queue < int > q;
    void push(int x) {
        int n = q.size();
        q.push(x);
        for(int i=0;i<n;i++){
            q.push(q.front());
            q.pop();
        }
    }
    int pop() {
        int n=q.front();
        q.pop();
        
        
        return n;
    }
    
    int top() {
        int n=q.front();
        return n;
    }
    
    bool empty() {
        if(q.size()==0){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */