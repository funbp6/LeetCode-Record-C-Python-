class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        stack.push_back(x);
        if (mins.empty() || mins.back() >= x) mins.push_back(x);
    }
    
    void pop() {
        if (stack.empty()) return;
        if (stack.back() == mins.back()) mins.pop_back();
        stack.pop_back();
        
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return mins.back();
    }
    
private:
    vector<int> stack;
    vector<int> mins;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */