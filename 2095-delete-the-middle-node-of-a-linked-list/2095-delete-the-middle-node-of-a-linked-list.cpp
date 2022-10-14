class Solution
{
    public:
        ListNode* deleteMiddle(ListNode *head)
        {

            if (head->next == NULL)
            {
                return NULL;
            }

            ListNode *slow = head;
            ListNode *fast = head;
            ListNode *prev;

            while (fast != NULL && fast->next != NULL)
            {
                fast = fast->next->next;
                prev = slow;
                slow = slow->next;
                
                
            }
            prev->next = prev->next->next;

            return head;
        }
};