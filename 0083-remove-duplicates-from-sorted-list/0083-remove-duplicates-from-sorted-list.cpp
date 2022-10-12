class Solution
{
    public:
        ListNode* deleteDuplicates(ListNode *head)
        {

            ListNode *cur = head;
            while (cur != NULL && cur->next != NULL)
            {
                //ListNode *nexta = cur->next;
                if (cur->val == cur->next->val)
                {
                    cur->next = cur->next->next;
                }
                else
                {
                    cur = cur->next;
                }
            }
            return head;
        }
};