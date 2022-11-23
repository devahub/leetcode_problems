class Solution
{
    public:

       	    int trap(vector<int>& h) {
       	        int n=h.size();
       	        vector < int>vmax(n,0);
       	        vector < int>vmin(n,0);
       	        int area=0;

       	       for(int i=1;i < n;i++){
       	           vmax[i]=max(vmax[i-1],h[i-1]);
       	       }     

       	        for(int i=n-2;i>=0;i--){
       	           vmin[i]=max(vmin[i+1],h[i+1]);
       	       }    

       	        for(int i=1;i < n-1;i++){
       	           area += max(0, min(vmax[i], vmin[i]) - h[i]);

       	        }
       	        return area;
       	    }
       	};

       	/// two pointer approach---->

//         int trap(vector<int> &h)
//         {
//             int n = h.size();
//             int l = 0;
//             int r = n - 1;
//             int water = 0;
//             int leftmax = 0;
//             int rightmax = 0;

//             while (l < r)
//             {
//                 if (h[l] < h[r])
//                 {

//                     if (h[l] < leftmax)
//                     {
//                         water += leftmax - h[l];
//                     }
//                     else
//                     {
//                         leftmax = h[l];
//                     }
//                     l++;
//                 }
//                 else
//                 {
//                     if (h[r] < rightmax)
//                     {
//                         water += rightmax - h[r];
//                     }
//                     else
//                     {
//                         rightmax = h[r];
//                     }
//                     r--;
//                 }
//             }
//             return water;
//         }
// };