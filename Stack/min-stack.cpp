class MinStack {
    private:
        std::stack<int> mainStack; // Main stack to store values
        std::stack<int> minStack;
public:
    MinStack() {}

    // Push value onto the stack
    void push(int val) {
        mainStack.push(val);
        // If minStack is empty or val is smaller or equal to the current minimum, push it onto minStack
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    // Remove the top element from the stack
    void pop() {
        if (mainStack.empty()) return; // Check if the stack is empty
        if (mainStack.top() == minStack.top()) {
            minStack.pop(); // Pop from minStack if it's the minimum
        }
        mainStack.pop();
    }

    // Get the top element of the stack
    int top() {
        return mainStack.top();
    }

    // Retrieve the minimum element in the stack
    int getMin() {
        return minStack.top();
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
