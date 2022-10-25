class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *heada, ListNode *headb)
        {

           	//      brut force-------> n2 approach

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

           	// using map ---->

            // unordered_map<ListNode*, int> mp;
            // while (head1 != NULL)
            // {
            //     mp[head1]++;
            //     head1 = head1->next;
            // }
            // while (head2 != NULL)
            // {
            //     if (mp[head2] > 0)
            //     {
            //         return head2;
            //     }
            //     head2 = head2->next;
            // }
            // return NULL;
        }
};