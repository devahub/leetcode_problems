class Solution {
public:
    
    
    
    // There is an obvious way to do sorting with priority queues: Take the items that you want to sort, and insert them into the priority queue (using the item itself as its own priority). Then remove items from the priority queue until it is empty. The items will come off the queue in order from largest to smallest.
    
    vector<int> sortArray(vector<int>& nums) {
     priority_queue<int,vector<int>,greater<int>>pq;
        
        for(auto i:nums){
            pq.push(i);
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]=pq.top();
            pq.pop();
        }
        return nums;
    }
};