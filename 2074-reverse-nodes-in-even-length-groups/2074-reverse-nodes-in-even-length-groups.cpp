class Solution
{
    public:

    
        ListNode* reverse(ListNode *head)
        {
            if (!head)
                return head;
            ListNode *prev = NULL;

            while (head != NULL)
            {
                ListNode *temp = head->next;
               
                head->next = prev;
                prev = head;
                head = temp;
            }
            return prev;
        }

    
    
    
    
    ListNode* reverseEvenLengthGroups(ListNode *head) {
        ListNode* dummy = new ListNode();
        dummy -> next = head;
        
        ListNode* prev=dummy;
        
        for(int len=1;len<1e5 && head;len++){
            ListNode* tail=head;
            ListNode* nexthead;
            
            int j=1;
            while(j<len && tail!=NULL && tail->next!=NULL)
            {
                tail=tail->next;
                j++;
            }
            nexthead=tail->next;
            
            
            if(j%2==0){                    // if group is even----> 
                tail->next=NULL;
                prev->next=reverse(head);
                prev=head;
                head->next=nexthead;
                head=nexthead;
             }
            else{
                prev=tail;
                head=nexthead;
            }
        }
        
    return dummy->next;  
    }
};