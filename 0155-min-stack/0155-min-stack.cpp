// class MinStack {
// public:
//       vector<int>v;
    
//     MinStack() {
//         v.clear();
//     }

    
  
    
//     void push(int val) {
//         v.push_back(val);
//     }
    
//     void pop() {
//         v.erase(v.end() - 1);
//     }
    
//     int top() {
//         return v[v.size()-1];
//     }
    
//     int getMin() {
//         return *min_element(v.begin(),v.end());
//     }
// };



//  approach--2


class MinStack {
public:
    stack<int>s1, s2;
    
    void push(int x) {
        if(s1.empty()){
            s2.push(x);
        }
        else if(x <= s2.top()){
            s2.push(x);
        }
        s1.push(x);
    }
    
    void pop() {
        if(s1.empty())return;
        if(s1.top() == s2.top()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        if(s1.empty())return -1;
        return s1.top();
    }
    
    int getMin() {
        if(s1.empty())return -1;
        return s2.top();
    }
};





