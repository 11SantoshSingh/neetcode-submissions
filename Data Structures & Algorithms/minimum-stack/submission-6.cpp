class MinStack {
public:
    long min;
    stack<long> st;

    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            min = val;
            st.push(0);
        }else{
            st.push(val - min);
            if(val < min){
                min = val;
            }
        }

    }
    
    void pop() {
        if(st.empty()) return;

        long pop = st.top();
        st.pop();

        if(pop < 0){
            min = min - pop;
        }
    }
    
    int top() {
        long top = st.top();
        return (top > 0) ? (int)(top + min) : (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
