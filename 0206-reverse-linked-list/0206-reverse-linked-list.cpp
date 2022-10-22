class Solution
{
    public:
       	// brute force---->vector
//         ListNode* reverseList(ListNode *head)
//         {
//             vector<int> v;
//             ListNode *cur = head;
//             while (cur != NULL)
//             {
//                 v.push_back(cur->val);
//                 cur = cur->next;
//             }
//             reverse(v.begin(), v.end());
//             cur = head;
//             for (int i =0;i<v.size(); i++)
//             {
//                 cur->val = v[i];
//                 cur = cur->next;
//             }
//             return head;
//         }
// };

// iterative method----->

    ListNode* reverseList(ListNode* head) {

        ListNode* pre=NULL;
        ListNode* next=NULL;

        while(head!=NULL){
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
};

// recurssive method------->

//   ListNode* reverseList(ListNode* head){

//       if(head==NULL || head->next==NULL){          	// base case
//           return head;
//       }

//       ListNode* newhead=reverseList(head->next);

//       head->next->next=head;
//       head->next=NULL;

//       return newhead;

//   }
// };