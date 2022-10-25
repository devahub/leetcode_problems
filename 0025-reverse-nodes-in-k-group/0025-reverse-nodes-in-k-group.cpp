class Solution
{
    public:

       	// brute force----vector

       	//     ListNode* reverseKGroup(ListNode* head, int k) {
       	//         vector < int>v;

       	//         ListNode* cur=head;
       	//         while(cur!=NULL){
       	//             v.push_back(cur->val);
       	//             cur=cur->next;
       	//         }

       	//         if(k>v.size()) 
       	//             return head;                  
       	//         else if(k==v.size())
       	//         {                        
       	//             reverse(v.begin(),v.end());
       	//         }
       	//        	// important lines---------------->>>>>>>>
       	//         else{
       	//             int size=v.size();
       	//             int start=0;
       	//             int end=k;

       	//             while(k<=size){
       	//                 reverse(v.begin()+start,v.begin()+end);
       	//                 start += k;
       	//                 end += k;
       	//                 size =size-k;
       	//             }

       	//         }

       	//         ListNode* n=new ListNode(-1);
       	//         cur=n;
       	//         for(int i=0;i < v.size();i++){
       	//             ListNode* temp=new ListNode(v[i]);
       	//             cur->next=temp;
       	//             cur=cur->next;
       	//         }

       	//     return n->next;
       	//     }
       	// };

       	// 

        ListNode* reverseKGroup(ListNode *head, int k)
        {
            if (head == NULL) return head;

            ListNode *dummy = new ListNode(0);
            dummy->next = head;

            ListNode *cur = dummy, *nex = dummy, *pre = dummy;
            int l = 0;

            while (cur->next != NULL)
            {
                cur = cur->next;
                l++;
            }

            while (k <= l)
            {
                cur = pre->next;
                nex = cur->next;
                for (int i = 1; i < k; i++)
                {
                    cur->next = nex->next;
                    nex->next = pre->next;
                    pre->next = nex;
                    nex = cur->next;
                }
                pre = cur;
                l = l - k;
            }
            return dummy->next;
        }
};