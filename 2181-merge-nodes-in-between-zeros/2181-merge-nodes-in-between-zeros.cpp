
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* cur=head;
        vector<int>v;
        int sum=0;
        
        while(cur!=NULL){
            if(cur->val!=0){
                sum+=cur->val;
            }
            else{
                if(sum!=0){
                    v.push_back(sum);
                sum=0;
            }
            }
            cur=cur->next;
        }
        
        cur=head;
        for(int i=0;i<v.size()-1;i++){
            cur->val=v[i];
            cur=cur->next;
        }
        
        cur->val = v[v.size() - 1];
        cur->next = NULL; 
        return head;
    }
};