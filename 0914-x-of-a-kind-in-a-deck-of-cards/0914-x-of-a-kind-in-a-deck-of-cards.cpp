class Solution {
public:
    
    // with gcd
    
//     bool hasGroupsSizeX(vector<int>& deck) {
//         unordered_map<int,int>mp;
//         int r=0;

//         for(auto i:deck){
//             mp[i]++;
//         }

//         for(auto i:mp){
//            r=__gcd(r,i.second);
//         }
//         return r>1;
//     }
// };
    
    
    
    
    
    // without gcd--->
// Just count frequency of all element,
// then find minimum frequency,
// now, we need to try for every possible x starting from minm freq until 2, if
// u found such x then return true otherwise false
    
     bool hasGroupsSizeX(vector<int>& deck) {
        
        unordered_map<int, int> map;
        
        for(int i=0;i<deck.size();i++){
            map[deck[i]]++;
        }
        
        int minsize = INT_MAX;
        for(auto a : map){
            if(a.second < minsize) minsize = a.second;
        }
        
        while(minsize >= 2){
            bool flg = true;
           for(auto a : map){
                if(a.second % minsize != 0){
                    flg = false;
                    break;
                }
            }
            if(flg) return flg;
            minsize--;
        }
        return false;
    }
};