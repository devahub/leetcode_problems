
class Solution {
public:
    
    // using vector,stack====>
    
//     ListNode* removeNodes(ListNode* head) {
        
//         vector<ListNode*>v;
//         ListNode* cur=head;
        
//         while(cur!=NULL){
//             v.push_back(cur);
//             cur=cur->next;
//         }
        
//         reverse(v.begin(),v.end());
//         stack<ListNode*> st; 
//          for(ListNode* l:v){
            
//             if(st.size()==0){
//                 st.push(l);
//                 continue;
//             }
//             if(l->val>=st.top()->val){
//                 st.push(l);
//             }
//         }
//         if(st.size()==0)return NULL;
        
//         ListNode*root = st.top();
//         ListNode* tail = st.top();
//         st.pop();
        
//          while(st.size()){
//             ListNode* l = st.top();
//             st.pop();
//             tail -> next = l;
//             tail = tail->next;   
//         }
//         tail->next = NULL;
        
//         return root;
//     }
// };
    
    
    
    // using linked list only---->reverse linked list----->
    
  ListNode* reverseList(ListNode* head) {
    ListNode *cur = head, *prev = nullptr;
    while (cur != nullptr) {
        swap(cur->next, prev);
        swap(prev, cur);
    }
    return prev;
}
    
ListNode* removeNodes(ListNode* head) {
    head = reverseList(head);
    for (auto p = head; p != nullptr && p->next != nullptr; ) {
        if (p->val > p->next->val)
            p->next = p->next->next;
        else
            p = p->next;
    }
    return reverseList(head);
}
};