class MinStack {
public:
      vector<int>v;
    
    MinStack() {
        v.clear();
    }

    
  
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.erase(v.end() - 1);
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        return *min_element(v.begin(),v.end());
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