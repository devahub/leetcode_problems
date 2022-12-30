class Solution {
public:
    
    
    
    //  reverse traversing 
    
    vector<int> plusOne(vector<int>& digits) {
        vector<int>v;
        for(int i=digits.size()-1;i>=0;i--)
        {
            
            if(digits[i]!=9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};

//  vector<int> plusOne(vector<int>& digits) 
//     {
//         if (digits.back() == 9)
//         {
//             digits.pop_back();
//             digits = plusOne(digits);
//             digits.push_back(0);
//         }
        
//         else if (digits.empty())
//             digits.push_back(1);

//         else
//             digits.back()++;
        
//         return digits;
//     }
// };