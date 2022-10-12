class Solution
{
    public:
       	//         ListNode* deleteDuplicates(ListNode *head)
       	//         {

       	//             ListNode *cur = head;
       	//             while (cur != NULL && cur->next != NULL)
       	//             {
       	//                
       	//                 if (cur->val == cur->next->val)
       	//                 {
       	//                     cur->next = cur->next->next;
       	//                 }
       	//                 else
       	//                 {
       	//                     cur = cur->next;
       	//                 }
       	//             }
       	//             return head;
       	//         }
       	// };

       	// recurssive soln---->

        ListNode* deleteDuplicates(ListNode *head)
        {
            ListNode *curr = head;
            if (curr != NULL && curr->next != NULL)
            {
                if (curr->val == curr->next->val)
                {
                    curr->next = curr->next->next;
                }
                else
                {
                    curr = curr->next;
                }
                deleteDuplicates(curr);
            }
            return head;
        }
};