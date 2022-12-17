class Solution {
public:
    
    // brute force----->
    
//     vector<int> minOperations(string boxes) {
//         int n=boxes.size();
//         vector<int>v(n);
        
//         for(int i=0;i<n;i++){
//             int c=0;
//             for(int j=0;j<n;j++){
//                 if(boxes[j]=='1'){
//                     c+=abs(i-j);
//                 }
//             }
//             v[i]=c;
//         }
//         return v;
//     }
// };
    
    
    
    // using left and right vector     ----> prefix and postfix vector technique
    
    // taking first testcase---->
    //  original   ---->[1,1,0]
    //  left vector---->[0,1,3]
    //  right vector--->[1,0,0]
    
     vector<int> minOperations(string boxes){
        int n=boxes.size();   
        vector<int> left(n, 0), right(n, 0), ans(n, 0);
        int balls = 0;
        
        balls = boxes[0] - '0';
        for(int i=1;i<n;i++){
            left[i] = left[i-1] + balls;
            balls += boxes[i] - '0';
        }
        
        balls = boxes[n-1] - '0';
        for(int i=n-2;i>=0;i--){
            right[i] = right[i+1] + balls;
            balls += boxes[i] - '0';
        }
        
        for(int i=0;i<n;i++)
            ans[i] = left[i] + right[i];
        
        return ans;
         
     }
};