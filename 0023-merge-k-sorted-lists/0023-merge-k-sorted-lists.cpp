/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

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
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        ListNode* head=lists[0];
        
        for(int i=1;i<lists.size();i++){
            head=mergeTwoLists(head,lists[i]);
        }
        return head;        
    }
};