class Solution {
public:
//     bool isLongPressedName(string name, string typed) {
//         int ni=0;
//         int ti=0;
//         int n = name.size();
//         int t = typed.size();

//         while(ni<name.size() && ti<typed.size()){
//             if(name[ni]==typed[ti]){
                
//                 int cn = 1, ct = 1;
//                 while(ni < n && name[ni] == name[ni + 1]){
//                     ni++;
//                     cn++;
//                 }
//                 while(ti < t && typed[ti] == typed[ti + 1]){
//                     ti++;
//                     ct++;
//                 }
//                 if(cn > ct) return false;
//             }
//             else{
//                 return false;
//             }
//             ni++;
//             ti++;
//         }
// return ni==n && ti==t;
//     }
// };
    
    
    //another approach----->


 bool isLongPressedName(string name, string typed) {
      
        //delete all the continuous duplicate elements
        //which are not present in name
        //compare type and name
        
        for(int i=0; i<typed.size(); i++)
        {
            while((i+1 < typed.size()) && (typed[i] == typed[i+1]) && (name[i+1] != typed[i+1]))
            {
                 typed.erase(i+1, 1);
            }
        }
        
        if(name == typed)
            return true;
        return false;
        
        
    }
};
