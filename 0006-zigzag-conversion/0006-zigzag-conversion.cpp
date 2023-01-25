// When we convert the string into ZigZag, we can divide each group of characters into periods, with size of 
//        2 * numRows - 2
// You can see that the first and last row has increment of periodSize = 6,
// The second row has two increments, which is alternating between 4 and 2.
// The third row also has two increments, which is alternating between 2 and 4.

// We can draw the following conclusion: there are two increments for each row i, such that

// int inc1 = periodSize - (i * 2);
// int inc2 = periodSize - inc1;


class Solution {
public:
//     string convert(string s, int num) {
        
//         if(num==1){
//             return s;
//         }
        
    
//         string res;
//         int periodSize=2*num-2;
        
//         for(int i=0;i<num;i++){
//             int inc1 = periodSize - (i * 2);
// 		    int inc2 = periodSize - inc1;
// 		    int j = i;
            
//             while(j < s.length()) {
// 			if (inc1 != 0 && j < s.length()) { 
// 				res += s[j];
// 				j += inc1;
// 			}

// 			if (inc2 != 0 && j < s.length()) { 
// 				res += s[j];
// 				j += inc2;
// 			}   
// 		}
// 	}

// 	return res;
        
//     }
// };











////approach--->2



/*n=numRows

Δ=2n-2    1                           2n-1                         4n-3
Δ=        2                     2n-2  2n                    4n-4   4n-2
Δ=        3               2n-3        2n+1              4n-5       .
Δ=        .           .               .               .            .
Δ=        .       n+2                 .           3n               .
Δ=        n-1 n+1                     3n-3    3n-1                 5n-5
Δ=2n-2    n                           3n-2                         5n-4

*/



 string convert(string s, int numRows) {
        vector<string> v(numRows, "");
        int i =0;
        int n = s.length();
     
    
        while(i<n){
            
            for(int j =0; j<numRows && i<n; j++ ){
                v[j].push_back(s[i++]);
            }
            
            for(int j =numRows-2; j>=1 && i<n; j--){
                v[j].push_back(s[i++]);
            }
        }
        
     
        string res ="";
        for(auto i : v){
            res+=i;
        }
        return res;
    }
};






