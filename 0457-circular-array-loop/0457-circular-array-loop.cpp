class Solution {
public:
    
    static int next(const vector<int> &arr, bool isForward, int index){
        
        bool direction = arr[index] >= 0;
        if(direction != isForward){
          return -1;
        }
        int nex = (index + arr[index]) % (int)arr.size();

        if(nex < 0){
          nex += arr.size();            // take care of negative numbers
        }
        if(nex == index){
          return -1;                    //single element loop
        }
        return nex;
  }
    
    bool circularArrayLoop(vector<int>& nums) {
            for(int i=0;i<nums.size();i++){
                bool isForward = nums[i]>=0;     //note the direction of movement
                int slow = i;
                int fast = i;
                
                do{
                    slow=next(nums,isForward,slow);
                    fast=next(nums,isForward,fast);
                    
                    if(fast!=-1){
                        fast=next(nums,isForward,fast);
                    }
                }
                while(slow != -1 and fast != -1 and slow != fast);
                
                if(slow!=-1 && slow==fast){
                    return true;
                }
            }
        return false;
    }
};