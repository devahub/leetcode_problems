
class Solution {
public:
        
//         ListNode* oddEvenList(ListNode* head) {
//         vector<int> vo,ve;
//         ListNode* temp = head;
//         int count=0;
//         while(temp){
//             if(count%2==0){
//                 vo.push_back(temp->val);
//                 count++;
//             }
//             else{
//                 ve.push_back(temp->val);
//                 count++;
//             }
//             temp=temp->next;
//         }
//         ListNode* ptr = head;
//         for(int i=0;i<vo.size();i++){
//             ptr->val = vo[i];
//             ptr=ptr->next;
//         }
//         for(int i=0;i<ve.size();i++){
//             ptr->val=ve[i];
//             ptr=ptr->next;
//         }
//         return head;
//     }
// };
    
    
    
      ListNode* oddEvenList(ListNode* head){
            
          
          
          if(head==NULL || head->next==NULL || head->next->next==NULL)
              return head;
          
          ListNode* odd=head;
          ListNode* even=head->next;
          ListNode* even_start=head->next;
          
          while(odd->next!=NULL && even->next!=NULL){
              odd->next=even->next;
              even->next=odd->next->next;
              
              even=even->next;
              odd=odd->next;
        }
          
          odd->next=even_start;
          return head;
          
      }
   
};