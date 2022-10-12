class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {

        
        //      brut force-------> 
        
        
//        ListNode* temp;
        
//         while(heada!=NULL){
//             temp=headb;
//             while(temp!=NULL){
//                 if(heada==temp){
//                     return heada;
//                 }
//                 temp=temp->next;
//             }
//             heada=heada->next;
//         }
//         return NULL;
        
       // approach--->2
//         ListNode* d1=heada;
//         ListNode* d2=headb;
        
//        while(d2!=d1){
//            if(d1==NULL){
//                d1=headb;
//            }
//            else{
//                d1=d1->next;
//            }
//             if(d2==NULL){
//                d2=heada;
//            }
//            else{
//                d2=d2->next;
//            }
           
//        }
//         return d1;
     
        
      // using map ---->
        
        unordered_map<ListNode*,int>mp;
        while(head1!=NULL){
            mp[head1]++;
            head1=head1->next;
        }
      while(head2!=NULL){
          if(mp[head2]>0){
              return head2;
              
          }
          head2=head2->next;
      }
        return NULL;
    }
};