class Solution {
public:
    
//      Imagine the input array as a concatenation of the same array, twice. [1,2,1] ->             [1,2,1,1,2,1]
//         Similar to Next Greater Element 
    
    
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        nums.resize(2*n);
        
        for(int i=n; i<2*n; i++) //concatenate the same array
        {
            nums[i] = nums[i-n];
        }
        
        vector<int> res(n, -1); 
        stack<int> st;
        
        for(int i=0; i<2*n; i++)
        {
            int ele = nums[i];
            
            while(!st.empty() && ele > nums[st.top()])
            {
				
				
                if(st.top() >= n) 
                {
                    st.top() = st.top() - n;
                }
                
                res[st.top()] = ele;
                st.pop();
            }
            
            st.push(i);
        }
        
        return res;
    }
};