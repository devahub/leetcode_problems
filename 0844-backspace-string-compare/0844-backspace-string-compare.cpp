class Solution {
public:

    
    // using two pointers---->
    
    
    bool backspaceCompare(string s, string t) {
                
        int l=0;
        int p=0;
        
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='#')
            {
              l--; 
            l=max(0,l);
            }
            else{
                s[l]=s[i];
                l++;                
            }
         }
       
        
         for(int i=0;i<t.size();i++){
            if(t[i]=='#')
            {
              p--; 
                p=max(0,p);
            }
            else{
                t[p]=t[i];
                p++;                
            }
         }
        
        if(l!=p){
            return false;
        }
        else{
        for(int i=0;i<l;i++){
            if(s[i]!=t[i])
                return false;
        }
        }
        return true;
   }
};
        
    
    


// using stack----->pop element when you get '#'


//      bool backspaceCompare(string s, string t){ 
//         stack<char>st1;
//         stack<char>st2;
        
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='#' && !st1.empty())
//                 st1.pop();
//             else if(s[i]=='#' && st2.empty())
//                 continue;
//             else{
//                 st1.push(s[i]);
//             }
//         }
        
//         for(int i=0;i<t.size();i++){
//             if(t[i]=='#' && !st2.empty())
//                 st2.pop();
            
//             else if(t[i]=='#' && st2.empty())
//                 continue;
//             else{
//                 st2.push(t[i]);
//             }
//         }
                
//        if(st1==st2)
//            return true;
        
//      return false;   
        
//     }
// };
    
    