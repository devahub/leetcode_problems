class Solution
{
    public:
//         void moveZeroes(vector<int> &nums)
//         {

//             int i = 0, j = 0;

//             while (i < nums.size())
//             {
//                 if (nums[i] != 0)
//                 {
//                     swap(nums[i], nums[j]);
//                     i++;
//                     j++;
//                 }
//                 else
//                     i++;
//             }
//         }
// };


void moveZeroes(vector<int> &nums){
    
    stack<int>s;
    
    for(auto i:nums){
        if(i!=0){
            s.push(i);
        }
    }
   for(auto i:nums){
       if(i==0){
           s.push(i);
       }
   }
   
    int pos=nums.size()-1;
    while(!s.empty()){
        nums[pos]=s.top();
        s.pop();
        pos--;
    }
    
}
};