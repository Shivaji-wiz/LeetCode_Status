class MinStack {
public:
    stack<int> stk;
    vector<int> vec;
    
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        vec.push_back(val);
    }
    
    void pop() {
        stk.pop();
        vec.pop_back();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return *min_element(vec.begin(),vec.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */