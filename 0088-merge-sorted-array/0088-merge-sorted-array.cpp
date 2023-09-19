class Solution {
public:
    
    
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         for(int i=m;i<m+n;i++){
//             nums1[i]=nums2[i-m];
//         }
//        sort(nums1.begin(),nums1.end()); 
//     }
// };
    
     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<nums1.size();i++){
           nums1[i]=nums2[j];
            j+=1;
        }
        
        sort(nums1.begin(),nums1.end());
       
    }
};
    
//      void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
       
         
         
//         }
//      };