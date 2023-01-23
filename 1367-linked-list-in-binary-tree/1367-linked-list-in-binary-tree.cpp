
class Solution {
public:
    
//     bool dfs(TreeNode* root,ListNode* head)
//     {
//         if(!head)return true;
        
//         if(!root||root->val!=head->val)
//         {
//             return false;
//         }
    
//         if(dfs(root->right,head->next)){
//             return true;
//         }
//         if(dfs(root->left,head->next)){
//             return true;
//         }
//         return false;
//     }
    
    
//     bool isSubPath(ListNode* head, TreeNode* root) {
        
//         queue<TreeNode*>q;
//         q.push(root);
        
//         while(!q.empty()){
//             int size=q.size();
//             for(int i=0;i<size;i++){
//                 TreeNode *temp=q.front();
//                 q.pop();
//                 bool cnt=0;
//                 if(temp->val==head->val)
//                 {
//                  cnt=dfs(temp,head);   
//                 }
//                 if(cnt==true){
//                     return true;
//                 }
//                  if(temp->left)
//                 {
//                     q.push(temp->left);
//                 }
//                 if(temp->right)
//                 {
//                     q.push(temp->right);
//                 }
//             }
            
//         }
//         return false;
//     }
// };




// another approach------->


  bool dfs(TreeNode* root, ListNode* head){
        if(head==NULL) 
            return true;
      
        if(root==NULL || root->val!=head->val)
            return false;
      
        return dfs(root->left, head->next) || dfs(root->right, head->next);
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if(head==NULL) 
            return false;
        if(root==NULL) 
            return false;
        
        if(dfs(root, head)) 
            return true;
        
        return isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
