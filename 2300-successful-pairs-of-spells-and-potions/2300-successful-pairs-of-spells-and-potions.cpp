class Solution {
public:
    
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success)       {
        vector<int> v(spells.size(),0);
        sort(potions.begin(),potions.end());
        
        for(int i=0;i<spells.size();i++)
        {   
            int l=0;
            int h=potions.size()-1;
            int mid;
            while(l<=h)
            {
                mid = l + (h-l)/2;
                
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