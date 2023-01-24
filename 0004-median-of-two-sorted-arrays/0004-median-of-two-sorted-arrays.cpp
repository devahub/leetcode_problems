class Solution
{
    public:
    
    // brute force----->  push everything into vector
    
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> v;
            double ans = 0.00;

            for (int i = 0; i < nums1.size(); i++)
                v.push_back(nums1[i]);
            for (int i = 0; i < nums2.size(); i++)
                v.push_back(nums2[i]);
            sort(v.begin(), v.end());
            int n = v.size();
            if (n % 2 != 0)
            {
                ans = v[(n - 1) / 2.0];
            }
            else
            {
                ans = (v[(n / 2)] + v[(n - 1) / 2]) / 2.0;
            }
            return ans;
        }
};
    
    
    
    
    
    
    
    
    // two pointer method used in linkedlist ques to merge--->
    
//       double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
//         int a = nums1.size()-1;
//         int b = nums2.size()-1;
//         vector<double> nums3;
//         int i=0,j=0;
//         while(i<=a && j<=b){
//             if(nums1[i]>nums2[j]) {nums3.push_back(nums2[j]) ; j++;}
//             else {nums3.push_back(nums1[i]) ; i++;}
//         }
//         while(i<=a){
//             nums3.push_back(nums1[i]) ; i++;
//         }
//         while(j<=b){
//             nums3.push_back(nums2[j]) ; j++;
//         }
//         int c= nums3.size();
//         if(c%2!=0)
//         {
//             return nums3[c/2];
//         }
//         else
//             return (nums3[c/2 -1]+nums3[c/2])/2;
//     } 
//       }
// };
    
    
    
    
    
    
    
    
    
    
    // optimal---->>
    
//     double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2){
        
//         int m = nums1.size();
//         int n = nums2.size();
        
//         if(m > n)
//         {
//             return findMedianSortedArrays(nums2, nums1);
//         }
        
//         int l=0, r= m;
//         int total = m+n+1;
        
//         while(l<=r)
//         {
//             int fir = l + (r-l)/2;
//             int sec = total/2 - fir;
            
//             int l1=INT_MIN, l2=INT_MIN;
//             int r1=INT_MAX, r2=INT_MAX;
            
//             if(fir > 0)
//             {
//                 l1 = nums1[fir-1];
//             }
//             if(sec>0)
//             {
//                 l2 = nums2[sec-1];
//             }
//             if((fir>=0) && (fir<m))
//             {
//                 r1 = nums1[fir];
//             }
//             if((sec>=0) && (sec<n))
//             {
//                 r2 = nums2[sec];
//             }
            
//             if(l1<=r2 && l2<=r1)
//             {
//                 if((n+m)%2 == 0)
//                 {
//                     return (max(l1, l2)+min(r1, r2))/2.0;
                    
//                 }
//                 else
//                 {
//                     return max(l1, l2);
//                 }
//             }
//             else if(l1> r2)
//             {
//                 r = fir-1;
//             }
//             else
//             {
//                 l = fir+1;
//             }
//         }
//         return 0;    
//     }
// };
    
    