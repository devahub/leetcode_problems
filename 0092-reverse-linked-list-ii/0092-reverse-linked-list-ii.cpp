class Solution
{
    public:

       	// vector approach---->

       	//     ListNode* reverseBetween(ListNode* head, int left, int right) {
       	//         vector < int>v;

       	//         ListNode* cur=head;
       	//         while(cur!=NULL){
       	//             v.push_back(cur->val);
       	//             cur=cur->next;
       	//         }

       	//         reverse(v.begin()+left-1,v.begin()+right);

       	//         cur=head;
       	//         int i=0;
       	//         while(i < v.size()){
       	//             cur->val=v[i];
       	//             i++;
       	//             cur=cur->next;

       	//         }
       	//         return head;
       	//     }
       	// };

    
    // dummy pointers approach--->
    
        ListNode* reverseBetween(ListNode *head, int left, int right)
        {
            ListNode *dummy = new ListNode(0);
            ListNode * cur;
            ListNode *pre = dummy;
            dummy->next=head;
            
            for (int i = 0; i < left - 1; i++)
            {
                pre = pre->next;
            }

            cur = pre->next;

            for (int i = 0; i < right - left; i++)
            {
                ListNode *temp = pre->next;
                pre->next = cur->next;
                cur->next = cur->next->next;
                pre->next->next = temp;
            }

            return dummy->next;
        }
};