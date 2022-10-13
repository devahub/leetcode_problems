
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        
        ListNode* cur=head;
        while(cur!=NULL){
            v.push_back(cur->val);
            cur=cur->next;
        }
        
        reverse(v.begin()+left-1,v.begin()+right);
        
        cur=head;
        int i=0;
        while(i<v.size()){
            cur->val=v[i];
            i++;
            cur=cur->next;
            
        }
        return head;
    }
};