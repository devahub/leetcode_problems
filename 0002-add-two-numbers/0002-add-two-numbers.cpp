
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
//         ListNode* dummy=new ListNode();
//         ListNode* temp=dummy;
       
//         int x=0;
//         while(l1!=NULL || l2!=NULL){
//             int sum=0;
            
//             if(l1==NULL){
//                 sum=l2->val+x;
//             }
            
//             else if(l2==NULL){
//                 sum=l1->val+x;
//             }
//             else{
//                 sum=l1->val+l2->val+x;
//             }
            
//             x=sum/10;
//             sum=sum%10;
            
//             ListNode* n=new ListNode(sum);
//             temp->next=n;
//             temp=temp->next;
            
//             if(l1!=NULL)
//                 l1=l1->next;
//             if(l2!=NULL)
//             l2=l2->next;   
//         }
            
//         if(x>0){
//                 ListNode* t=new ListNode(x);
//                 temp->next=t;
//                 temp=temp->next;
                
                
//             }
//     return dummy->next;
//     }
// };
        
        
        
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
            c=sum/10;
            sum=sum%10;
            
            ListNode *cur = new ListNode(sum);
            temp -> next = cur;
            temp = temp -> next;
            
            
        }
           return dummy->next;     
        }
};