
class Solution {
public:
   ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
       head=prev;
       return head;
   }
    
    bool isPalindrome(ListNode* head) {
      ListNode* slow=head,*fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
      }
        
        ListNode* rev=reverse(slow->next);
        ListNode* cur=head;
        
        while(rev!=NULL){
            if(rev->val!=cur->val){
                return false;
            }
        
        rev=rev->next;
        cur=cur->next;
    }
    return true;
    }
};
        





        
//         ListNode *slow=head,*fast=head;
//         ListNode *temp,*prev;
        
//         while (fast!=NULL && fast->next!=NULL)
//         { 
//             slow = slow->next;
//             fast = fast->next->next;
//         }
        
//         prev=slow;
//         slow=slow->next;
//         prev->next=NULL;
        
//         while(slow!=NULL){
//             temp=slow->next;
//             slow->next=prev;
//             prev=slow;
//             slow=temp;
//             }
//         fast=head;
//         slow=prev;
//          while (slow!=NULL)
//             if (fast->val != slow->val) return false;
//             else fast = fast->next, slow = slow->next;
//         return true;
    


