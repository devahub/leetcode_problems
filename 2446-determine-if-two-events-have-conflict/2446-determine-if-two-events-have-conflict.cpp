class Solution {
public:
//     bool haveConflict(vector<string>& event1, vector<string>& event2) {
//         int  h11=stoi(event1[0].substr(0,2));
//         int  m11=stoi(event1[0].substr(3,5));
//         int  h12=stoi(event1[1].substr(0,2));
//         int  m12=stoi(event1[1].substr(3,5));
        
//         int  t11=stoi(event2[0].substr(0,2));
//         int  g11=stoi(event2[0].substr(3,5));
//         int  t12=stoi(event2[1].substr(0,2));
//         int  g12=stoi(event2[1].substr(3,5));
        
//         float j=h11+(float)m11/60;
//         float k=(h12)+(float)m12/60;
//         float l=(t11)+(float)g11/60;
//         float m=(t12)+(float)g12/60;
        
//         // cout<<j<<endl<<k<<endl<<l<<endl<<m;
        
//         if(l<=k && l>=j){
//             return true;
//         }
//         if(j<=m && j>=l){
//             return true;
//         }
//         if(k==l)return true;
        
//         return false;
//     }
// };
    
    
    
    
        bool haveConflict(vector<string>& event1, vector<string>& event2) {

            if(event2[0]<=event1[1] && event2[1]>=event1[0]){
                return true;
            }
            
            return false;
        }
};