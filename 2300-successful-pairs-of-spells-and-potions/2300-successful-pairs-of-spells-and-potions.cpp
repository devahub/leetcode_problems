class Solution {
public:
    
    // using binary search----->
   
    
vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)       {
        
        vector<int> v(spells.size(),0);
        sort(potions.begin(),potions.end());
        
        for(int i=0;i<spells.size();i++)
        {   
            int l=0;
            int h=potions.size()-1;
            
            while(l<=h)
            {
               int mid = l + (h-l)/2;
                //if(spells[i]*potions[mid] >= success)
                if((long long int)spells[i]*(long long int)potions[mid] >= success)
                    h = mid-1;
                
                
                else
                    l = mid+1;
            }
            
            v[i] = potions.size()-1-h;
        }
        return v;   
    }
};