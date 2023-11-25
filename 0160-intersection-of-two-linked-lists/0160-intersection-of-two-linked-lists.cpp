
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

    
    
    /// length differn soln
    
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
// 		int n = 0;
// 		int m = 0;
// 		ListNode* ptr1 = headA;
// 		ListNode* ptr2 = headB;
// 		while(ptr1 != NULL){
// 			n++;
// 			ptr1 = ptr1 -> next;
// 		}
// 		while(ptr2 != NULL){
// 			m++;
// 			ptr2 = ptr2 -> next;
// 		}
// 		int t = abs(n - m);
// 		if(n > m){
// 			while(t){
// 				headA = headA -> next;
// 				t--;
// 			}
// 		}
// 		else{
// 			while(t){
// 				headB = headB -> next;
// 				t--;
// 			}
// 		}
// 		while(headA != NULL and headB != NULL){
// 			if(headA == headB){
// 				return headA;
// 			}
// 			headA = headA -> next;
// 			headB = headB -> next;
// 		}
// 		return NULL;
// 	}
// };

