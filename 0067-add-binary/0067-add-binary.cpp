class Solution {
public:
    
    // sum and carry waala logic------>
    // for sum--->sum%2
    //for carry-->sum/2
    
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        
        int carry=0;
        int sum=0;
        string res;
        
        while(i>=0 || j>=0){
            sum=carry;
            if(i>=0)
                sum+=a[i--]-'0';
            if(j>=0)
                sum+=b[j--]-'0';
            
            res+=to_string(sum%2);              // most imp lines 
            carry=sum/2;                         
        }
        
        if(carry!=0)
            res+='1';
        
        reverse(res.begin(),res.end());
       
        return res;
    }
};







// approach---->2


// int add(int &curA, int &curB, int &carry)
// {
//         if(curA == 1 && curB == 1 && carry == 1)
//         {
//             return 11;
//         }
        
//         // if any of combination values are 1, then return 10
//         else if((curA == 1 && curB == 1) ||
//                 (curA == 1 && carry == 1) ||
//                 (curB == 1 && carry == 1))
//         {
//             return 10;
//         }
//         else if(curA || curB || carry)
//         {
//             return 1;
//         }
//         return 0;
//     }
    
// public:
//     string addBinary(string a, string b) {
//         int lena = a.size(), lenb = b.size();
//         int i = lena-1, j = lenb-1, sum = 0, carry = 0;
//         string res = "";
        

//         while(i >= 0 || j >= 0)
//         {
//             int curA, curB ;
            
//             curA = (i >= 0) ? (a[i--] - '0'): 0;
//             curB = (j >= 0) ? (b[j--] - '0') : 0;
            
//             sum = add(curA, curB, carry);
//             res = to_string(sum % 10) + res;
// 			carry = sum / 10;
//         }
        
//         // if carry is there, add it to result
//         if(carry)
//             res = to_string(carry) + res;
		
//         return res;
//     }
// };