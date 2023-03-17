class MyStack {
public:
    /** Initialize your data structure here. */
//     vector<int> stack;
//     MyStack() {}
    
//     /** Push element x onto stack. */
//     void push(int x) {
//         stack.push_back(x);
//     }
    
//     /** Removes the element on top of the stack and returns that element. */
//     int pop() {
//         int ele = stack.back();
//         stack.pop_back();
//         return ele;
//     }
    
//     /** Get the top element. */
//     int top() {
//         return stack.back();
//     }
    
//     /** Returns whether the stack is empty. */
//     bool empty() {
//         return stack.size() == 0;
//     }
// };
    
    
    
    
    
    //  2 approach---->
    
    queue<int>q1;
    queue<int>q2;
    
        MyStack() {
      
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());    q1.pop();
        }
        swap(q1, q2);
    }
    
    int pop() {
        int result = top();
        q1.pop();
        return result;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};