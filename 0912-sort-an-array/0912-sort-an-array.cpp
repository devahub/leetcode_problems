class Solution {
public:
    
    
    
    // There is an obvious way to do sorting with priority queues: Take the items that you want to sort, and insert them into the priority queue (using the item itself as its own priority). Then remove items from the priority queue until it is empty. The items will come off the queue in order from largest to smallest.
    
//     vector<int> sortArray(vector<int>& nums) {
//      priority_queue<int,vector<int>,greater<int>>pq;
        
//         for(auto i:nums){
//             pq.push(i);
//         }
        
//         for(int i=0;i<nums.size();i++){
//             nums[i]=pq.top();
//             pq.pop();
//         }
//         return nums;
//     }
// };
    
    
    
    
    /// using merge sort----->
    
     void merge(int low, int mid, int high, vector<int> &nums) {
        if (low >= high) 
            return;
        
         
         int l = low;
         int r = mid + 1;
         int k = 0;
         int size = high - low + 1;
         vector<int> sorted(size, 0);
         
        while (l <= mid and r <= high)          // transferring all elements to temporary array in sorted order
            sorted[k++] = nums[l] < nums[r] ? nums[l++] : nums[r++];
         
        while (l <= mid) 
            sorted[k++] = nums[l++];
         
        while (r <= high) 
            sorted[k++] = nums[r++];
         
        for (k = 0; k < size; k++)    // transferring all elements from temporary array to nums
            nums[k + low] = sorted[k];
    }

    void mergeSort(vector<int>& nums, int start, int end){
        if(start < end){
            int mid = start + (end - start) / 2;
            mergeSort(nums, start, mid);
            mergeSort(nums, mid + 1, end);
            merge(start, mid, end, nums);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};