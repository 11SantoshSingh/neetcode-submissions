class MinStack {
public:
    stack<int> minst, st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);

        val = min(val, minst.empty() ? val : minst.top());
        minst.push(val);
    }
    
    void pop() {
        st.pop();
        minst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top();
    }
};
