class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>v;
        
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int maxi=-1;
        
        for(int i=0;i<v.size();i++){
            maxi=max(maxi,v[i]+v[v.size()-i-1]);
        }
        return maxi;
    }
};