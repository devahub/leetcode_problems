class Solution {
public:

    
    // observation based--------->
    
    
// Eg. 
// 1. Consider n="9"
// => We need to add 1 for 9 times to get n
// 2. n = "4201"
// => We can add    1101
//                + 1100
//                + 1000 
//                + 1000 
//              -------
// 			     4201
    
    
    
    int minPartitions(string n) {
        int maxi=0;
        for(int i=0;i<n.size();i++){
            maxi=max(maxi,n[i]-'0');
        }
        return maxi;
    }
};
    