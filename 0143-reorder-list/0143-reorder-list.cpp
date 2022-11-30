
class Solution {
public:
        // brute force------>
        
        
//    void reorderList(ListNode* head) {
//         ListNode* temp = head;
//         vector<int>v;
        
//         while(temp!=NULL){
//             v.push_back(temp->val);
//             temp = temp->next;
//         }
        
//         vector<int>v1;
//         for(int i=0;i<v.size();i++){
//             v1.push_back(v[i]);
//             v1.push_back(v[v.size()-1-i]);
            
//         }
       
//         vector<int>v2;
//         for(int i=0;i<v.size();i++){
//             v2.push_back(v1[i]);
//         }
//         temp = head;
//         for(auto i:v2){
//             temp->val = i;
//             temp = temp->next;
//         }
//     }
// };

// approach---->2---->reverse linked list and then add alternatively

    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL)
            return;
        
        ListNode* mid=getmid(head);
        ListNode* sh=mid->next;
        mid->next=NULL;
        
        ListNode* rh=reverse(sh);
        
        while(head!=NULL && rh!=NULL)
        {
            ListNode* temp = head->next;
            head->next=rh;
            rh=rh->next;
            head->next->next=temp;
            head = temp;
        }
    }
    

    
    ListNode* getmid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
        } 
        return slow;
    }
        
    ListNode* reverse(ListNode* head)
        {
        ListNode *cur,*prev;
        cur=head;
        prev = NULL;
        while(cur!=NULL)
        {
            ListNode *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }    
};