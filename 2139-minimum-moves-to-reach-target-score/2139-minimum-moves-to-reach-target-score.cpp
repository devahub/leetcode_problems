class Solution {
public:
    
    //using recurssion----->
    
     int minMoves(int target, int maxDoubles) {
        if(target==1){
            return 0;
        }
        if(maxDoubles==0){
            return target-1;
        }
        if(target%2!=0){
            return 1+minMoves(target-1,maxDoubles);
        }
        else{
                return 1+minMoves(target/2,maxDoubles-1);
        }
      
    }
};