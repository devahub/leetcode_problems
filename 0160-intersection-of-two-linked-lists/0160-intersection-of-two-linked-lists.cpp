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
     
        
        
        
        ListNode* t1=head1;
        ListNode* t2=head2;
        
        while(t1!=t2){
            if(t1==NULL){
                t1=head2;
            }
            else{
                t1=t1->next;
            }
            if(t2==NULL){
                t2=head1;
            }
            else{
                t2=t2->next;
            }
            
        }
        return t1;
    }
};