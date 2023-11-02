
class Solution {
public:
    
  //  first we are calculating length of linked-list and then again traverse till len-n 
      
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
//         ListNode* temp=head;
//         int l=0;
//         int i=1;
        
//         while(temp!=NULL){
//             l++;
//             temp=temp->next;
//         }
        
//         if(l==n)
//             return head->next;
        
//         for(temp=head;i<l-n;i++){
//             temp=temp->next;
//         }
        
//         temp->next=temp->next->next;
        
//         return head;
        
        
        
        // approach ---------------------> 2  ---->slow & fast pointer
        // first we move fast n steps and then we move slow and fast simultaneously by 1 step
        
      ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* slow=head;
        ListNode* fast=head;
        
        while(n--){
            fast=fast->next;
        }
        if(fast==NULL)return head->next;
        
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            
        }
        slow->next=slow->next->next;
        
        return head;
        
        
        
        
        
        // approach-----------> 3--- brute force --->vector
        
//         vector<int>nums;
//         vector<int>ans;
        
//         while(head!=NULL)
//         {
//             nums.push_back(head->val);
//             head=head->next;
//         }        
        
//         int a =nums.size();
//         int b = a-n;
//         for(int i=0;i<b;i++){
//             ans.push_back(nums[i]);
            
//         }
//         for(int i=b+1; i<nums.size();i++){
//             ans.push_back(nums[i]);
//         }

//         ListNode* sol=new ListNode(-1);
//         ListNode* temp=sol;
        
//         for(auto i:ans){
//             ListNode* cur=new ListNode(i);
//             temp->next=cur;
//             temp=cur;
//         }
        
//         return sol->next;     
        
    }
};