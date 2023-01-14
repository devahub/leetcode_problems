class Solution
{
    
    public:
    
    // recurssive approach---->
    
        ListNode* mergeTwoLists(ListNode *list1, ListNode *list2)
        {
            
            if (list1 == NULL)
                return list2;
            if (list2 == NULL)
                return list1;

            if (list1->val <= list2->val)
            {
                list1->next = mergeTwoLists(list1->next, list2);
                return list1;
            }
            
            else
            {
                list2->next = mergeTwoLists(list1, list2->next);
                return list2;
            }
        }
};




    // approach -2--->brut force-->vector 
    //will be to store both the list2 into a vector and sort the vector

        
//     ListNode* mergeTwoLists(ListNode *list1, ListNode *list2)
//         {
//             vector<int>v;
//             ListNode* cur=list1;
//             while(cur!=NULL){
//                 v.push_back(cur->val);
//                 cur=cur->next;
//             }
            
//             cur=list2;
//              while(cur!=NULL){
//                 v.push_back(cur->val);
//                 cur=cur->next;
//             }
            
//             sort(v.begin(),v.end());
            
//             ListNode* ans=new ListNode(-1);
//             ListNode* temp=ans;
            
//             for(auto i:v){
//                 ListNode* curr=new ListNode(i);
//                 temp->next=curr;
//                 temp=curr;
//             }
//         return ans->next;     
//         }
// };
    