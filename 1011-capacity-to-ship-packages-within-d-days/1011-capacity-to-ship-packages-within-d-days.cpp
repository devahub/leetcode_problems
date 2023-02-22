class Solution {
public:
    
    
    //   watch video------->   https://www.youtube.com/watch?v=1w4-rZhP7BM
    
    bool helper(int mid,vector<int>& weights,int days){
        int count = 1, sum = 0;
        
        for(int i = 0; i < weights.size(); i++) {
            sum += weights[i];
            if (sum > mid) {
                count++;
                sum = weights[i];
            }
        }
        if (count <= days)
            return true;
        return false;
    }
    
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxCapacity=0;
        int n = weights.size();
        int result;
        
        for(int i = 0; i < n; i++)
            maxCapacity += weights[i];
        
        int low = *max_element(weights.begin(), weights.end());
        int high = maxCapacity;
       
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (helper(mid, weights, days)) {
                result = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return result;
    }
};