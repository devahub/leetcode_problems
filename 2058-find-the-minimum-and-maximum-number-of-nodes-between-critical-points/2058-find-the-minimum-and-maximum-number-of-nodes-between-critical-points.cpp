
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev=head;
        vector<int>v;
        int i=1;
        while(head->next!=NULL){
            if((prev->val < head->val and head->val > head->next->val) ||( prev->val > head->val and head->val < head->next->val)){
                v.push_back(i);
            }
            prev=head;
            i++;
            head=head->next;
        }
        
        if(v.size() < 2)            // no found case
            return {-1,-1};
        
        sort(v.begin(),v.end());
        int n=v.size()-1;
        int mini=INT_MAX;
         for(int i = 1 ; i < v.size(); i++){
            mini = min(v[i] - v[i - 1], mini);
         }
        int maxi = v[n] - v[0];
        return {mini,maxi};
    }
};