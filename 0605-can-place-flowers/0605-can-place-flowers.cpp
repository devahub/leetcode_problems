class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        int c=0;
        if (n == 0) 
            return true;
        if (flower.size() == 0) 
            return false;
        
        flower.push_back(0);         // append last index as 0
        flower.insert(flower.begin(),0);   // insert 0 at first index

        for(int i=1;i<flower.size()-1;i++){
            if(c<=n && flower[i]==0 && flower[i+1]==0 && flower[i-1]==0){
                c++;
                flower[i]=1;
            }
        }
        return c>=n;
    }
};