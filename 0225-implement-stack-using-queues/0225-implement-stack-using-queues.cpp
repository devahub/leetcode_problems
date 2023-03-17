class MyStack {
public:
    /** Initialize your data structure here. */
    vector<int> stack;
    MyStack() {}
    
    /** Push element x onto stack. */
    void push(int x) {
        stack.push_back(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ele = stack.back();
        stack.pop_back();
        return ele;
    }
    
    /** Get the top element. */
    int top() {
        return stack.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return stack.size() == 0;
    }
};