
class Solution {
public:
    
    
    
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        ListNode* slow=heada;
        ListNode* fast=headb;
        
        
        while(fast!=slow){
                if(slow==NULL){
           	               slow=headb;
           	           }
           	           else{
           	              slow=slow->next;
           	           }
           	            if(fast==NULL){
           	               fast=heada;
           	           }
           	           else{
           	               fast=fast->next;
           	           }
        }
        return slow;
    }
};