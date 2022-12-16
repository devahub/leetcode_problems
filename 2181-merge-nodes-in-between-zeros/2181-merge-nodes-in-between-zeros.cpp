class Solution
{
    public:
    
    
    
    // brute force-----> create a vector and push sum into it
    
//         ListNode* mergeNodes(ListNode *head)
//         {

//             ListNode *cur = head;
//             vector<int> v;
//             int sum = 0;

//             while (cur != NULL)
//             {
//                 if (cur->val != 0)
//                 {
//                     sum += cur->val;
//                 }
//                 else
//                 {
//                     if (sum != 0)
//                     {
//                         v.push_back(sum);
//                         sum = 0;
//                     }
//                 }
//                 cur = cur->next;
//             }

//             cur = head;
//             for (int i = 0; i < v.size() - 1; i++)
//             {
//                 cur->val = v[i];
//                 cur = cur->next;
//             }

//             cur->val = v[v.size() - 1];
//             cur->next = NULL;
//             return head;
//         }
// };
    
    
    
    
    
    ListNode* mergeNodes(ListNode *head){
        
        if(head->val==0)
            head=head->next;
        
        ListNode *res=head;
        ListNode *cur=head;
        int sum=0;
        
        while(cur!=NULL){
            if(cur->val!=0){
                sum+=cur->val;
                cur=cur->next;
            }
            else{
                res->val=sum;
                res->next=cur->next;
                cur=cur->next;
                res=cur;
                sum=0;
               
            }
        }
       return head; 
        
    }
};