
class Solution {
public:
       
        // brute force soln----->
        
//         first we map all the values of given linkedlist with their frequency and then push only those values which comes only 1 time in vector ans then convert that vector into linkedlist again
  
    
//    ListNode* deleteDuplicates(ListNode* head) {
//         map<int,int>mp;
//         vector<int>v;
//         ListNode* temp=head;
        
//         while(temp!=NULL){
//             mp[temp->val]++;
//             temp=temp->next;
//         }
        
//        for(auto &i:mp){
//             if(i.second==1){
//                 v.push_back(i.first);
//             }
//         }
//         ListNode* q=new ListNode();
//         temp=q;
//         for(auto &k:v){
//             ListNode* helper=new ListNode(k);
//             temp->next=helper;
//             temp=temp->next;
            
//         }
        
//         return q->next;
//     }
// };
        
        //  optimal approach->>>>>>>
    
      ListNode* deleteDuplicates(ListNode* head) {   
        ListNode* dummy=new ListNode(0,head);
        ListNode* pre=dummy;
        
        while(head!=NULL){
            
            if(head->next!=NULL && head->val==head->next->val){
                while(head->next!=NULL && head->val==head->next->val )
                {
                    head=head->next;
                }
                pre->next=head->next;
            }
            
            else{
                pre=pre->next;
            }
            head=head->next;
        }
            return dummy->next;
        }
};
        
    
        
        
        
        