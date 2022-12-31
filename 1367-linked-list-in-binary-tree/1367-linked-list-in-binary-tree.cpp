
class Solution {
public:
    
    bool dfs(TreeNode* root,ListNode* head)
    {
        if(!head)return true;
        
        if(!root||root->val!=head->val)
        {
            return false;
        }
    
        if(dfs(root->right,head->next)){
            return true;
        }
        if(dfs(root->left,head->next)){
            return true;
        }
        return false;
    }
    
    
    bool isSubPath(ListNode* head, TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *temp=q.front();
                q.pop();
                bool cnt=0;
                if(temp->val==head->val)
                {
                 cnt=dfs(temp,head);   
                }
                if(cnt==true){
                    return true;
                }
                 if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            
        }
        return false;
    }
};