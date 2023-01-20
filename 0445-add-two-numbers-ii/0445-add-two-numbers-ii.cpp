/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   
    ListNode* reverse(ListNode *head){
    ListNode* curr = head,*prev = NULL,*next = NULL;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
    
    
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        
        int c=0;
        while(l1!=NULL || l2!=NULL || c!=0)
        {
         int sum=0;
            
        if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
        if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
           
            sum+=c;
            c=sum/10;               // carry
            sum=sum%10;
            
            ListNode *cur = new ListNode(sum);
            temp -> next = cur;
            temp = temp -> next;
            }
        
        dummy=reverse(dummy->next);
        return dummy;
    }
};