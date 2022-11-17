class Solution {
public:
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        
    int area1=abs(ax2-ax1)*abs(ay2-ay1);
    int area2=abs(bx2-bx1)*abs(by2-by1);
    int inarea=0;
    
    
        int left = max(ax1, bx1);
        int right = min(ax2, bx2);
        int top = min(ay2, by2);
        int bottom = max(ay1, by1);
        
        if(left < right && top > bottom){
            inarea = (right-left) *(top-bottom);
        }
    
    
    
    return area1+area2-inarea;
    }
};