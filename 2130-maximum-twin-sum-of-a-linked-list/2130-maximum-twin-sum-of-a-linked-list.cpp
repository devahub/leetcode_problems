class Solution
{
    public:

       	// vector solution----->

       	//         int pairSum(ListNode *head)
       	//         {
       	//             vector<int> v;

       	//             while (head != NULL)
       	//             {
       	//                 v.push_back(head->val);
       	//                 head = head->next;
       	//             }
       	//             int maxi = -1;

       	//             for (int i = 0; i < v.size(); i++)
       	//             {
       	//                 maxi = max(maxi, v[i] + v[v.size() - i - 1]);
       	//             }
       	//             return maxi;
       	//         }
       	// };

       	// first get the middle of linkedlist and then traverse opposite sides and store sum and return max sum------>

        ListNode* reverseList(ListNode *cur, ListNode *prev = nullptr)
        {
            while (cur != nullptr)
            {
                swap(cur->next, prev);
                swap(prev != nullptr ? prev->next : prev, cur);
            }
            return prev;
        }

    int pairSum(ListNode *head)
    {

        ListNode *slow = head;
        ListNode *fast = head;
        int maxi = 0;

        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        slow = reverseList(slow);
        while (slow != NULL)
        {
            maxi = max(maxi, slow->val + head->val);
            slow = slow->next;
            head = head->next;
        }

        return maxi;
    }
};