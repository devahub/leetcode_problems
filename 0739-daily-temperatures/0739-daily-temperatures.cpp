class Solution {
public:
    
    // brute force------->TLE
    
//     vector<int> dailyTemperatures(vector<int>& temp) {
//       int n=temp.size();
//         vector<int>v(n,0);
        
//         for(int i=0;i<n-1;i++){
//             int c=0;
//             for(int j=i+1;j<n;j++){
//                 c++;
//                 if(temp[j]>temp[i]){
//                     v[i]=c;
//                     break;
//                 }
//             }
//         }
        
//        return v; 
//     }
// };
    
    
    
    // using stack------>
    
    
       vector<int> dailyTemperatures(vector<int>& temp){
           int n=temp.size();
           stack<int>st;
           vector<int>v(n,0);
           
           for(int i=n-1;i>=0;i--){
               while(!st.empty() && temp[st.top()]<=temp[i]){
                   st.pop();
               }
               
               if(!st.empty()){
                   v[i]=st.top()-i;
               }
               st.push(i);
           }
          return v;
       }
};