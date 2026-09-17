class MyStack {
public:
   queue<int>qp,qp2;
    MyStack() {
    }
    
    void push(int x) {
        qp2.push(x);
        while(!qp.empty()){
            qp2.push(qp.front());
            qp.pop();
        }
        swap(qp,qp2);

    }
    
    int pop() {
        int val= qp.front();
        qp.pop();
        return val;
    }
    
    int top() {
        return qp.front();
    }
    
    bool empty() {
        if(qp.empty()){
            return true;
        }
        return false;
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