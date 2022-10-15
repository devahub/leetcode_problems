class KthLargest {
public:
    // k largest is asked so we will use minimum heap--->
    
    priority_queue<int,vector<int>,greater<int>>pq;
    int size;
    
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(auto i:nums){
            pq.push(i);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > size)
            pq.pop();
        return pq.top();
    }
};

