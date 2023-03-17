class MyQueue {
public:
    
    
    
//    stack<int>s1;
//     stack<int>s2;
    
//     MyQueue() {
         
//     }
    
//     void push(int x) {
//        while(!s1.empty()){
//            s2.push(s1.top());
//            s1.pop();
//        } 
//         s2.push(x);
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
    
//     int pop() {
//         int cur=s1.top();
//         s1.pop();
//         return cur;
        
//     }
    
//     int peek() {
//         return s1.top();
//     }
    
//     bool empty() {
//        return s1.empty();  
//     }
// };


    
    
    
    // approach-2
    
    
    vector<int>vp;

    MyQueue() {
        
    }
    
    void push(int x) {
   vp.push_back(x);    
    }
    
    int pop() {
        int x= vp[0];
        vp.erase(vp.begin(),vp.begin()+1);
        
       return x;
    }
    
    int peek() {
        return vp[0];
    }
    
    bool empty() {
       if(vp.size() == 0)
           return true;
        return false;
    }
};