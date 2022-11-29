class RandomizedSet {
public:
    
    // using set------->
    
//     unordered_set<int>st;
//     RandomizedSet() {
//         st.clear();
//     }
    
//     bool insert(int val) {
//         if(st.find(val)!=st.end()){
//             return false;
//         }
//         st.insert(val);
//         return true;
//     }
    
//     bool remove(int val) {
//          if(st.find(val)==st.end())
//             return false;
//         st.erase(val);
//         return true;
//     }
    
//     int getRandom() {
//         vector<int> a;
//         for(auto i : st)
//         {
//             a.push_back(i);
//         }
//         int n=a.size();
//         return a[(rand() % n)]; 
//     }
// };


    
    
    //using map---->
    
    
 private:
    vector<int>v;
    unordered_map<int,int>mp;
    
    
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
            return false;
        else{
            v.push_back(val);
            mp[val]=v.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
         if(mp.find(val)==mp.end())
             return false;
        else{
            int last=v.back();  // back() fetches last element of the array vector
            v[mp[val]]=v.back(); 
				               
            v.pop_back();	  
            mp[last]=mp[val];	   
            mp.erase(val);	   
            return true;
        }
    }
    
    int getRandom()
    {
        int n=v.size();
        return v[rand()%n];
    }
};