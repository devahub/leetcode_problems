class Solution {
public:
    
    
    ///We need to check substrings with length that is divisible by n, then only it is possible to find a repeating substring.
    // For example, if n=10, we can have repeating substrings of length - 1,2,5 only.

    
    
    
//    bool repeatedSubstringPattern(string s) {
//         int n = s.size();
//         string s1 = "", s2 = "";
       
//         for(int i=1; i<=n/2; i++) {
            
            
//             if (n%i == 0) {
//                 s1 = s.substr(0, i);
//                 s2 = "";
//                 for(int j=0; j<n/i; j++) {
//                     s2 += s1;
//                 }
                
//                 if(s==s2) return true;
//             }
//         }
// 		return false;
//     }
// };
    
    
    
    
    
    
    
    
    
    ///   approach---->2
    
    
//     bool repeatedSubstringPattern(string s) {
// 	int n = s.size();

// 	if(n==1) return false;

// 	vector<int> lps(n, 0);

// 	int j=0;
// 	for(int i=1; i<n; i++) {
// 		if (s[i]==s[j]) {
// 			lps[i] = j+1;
// 			j++;
// 		} else {
// 			while(j>0) {
// 				j = (j>0) ? lps[j-1] : 0;
// 				if (s[i]==s[j]) {
// 					lps[i] = j+1;
// 					j++;
// 					break;
// 				}
// 				if (j==0) lps[i]=0;
// 			}
// 		}
// 	}
// 	if (lps[n-1]>0 && n%(n-lps[n-1]) == 0 ) {
// 		return true;
// 	} else {
// 		return false;
// 	}
// }
// };
    
    
    
    
    
    
    
    ////  approach----->3
    
    
    
     bool repeatedSubstringPattern(string s) {
        int n=s.size();
        string comb=s+s;
         
        for(int i=1;i<n;i++){
            string str=comb.substr(i,n);
            if(str==s) return true;
        }
        return false;
    }
};