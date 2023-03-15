

class Solution {
public:
    
    
    bool isCompleteTree(TreeNode* root) {
        bool value = false;
        
        if(root==NULL)
            return true;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *p = q.front();
            q.pop();
            if(p==NULL)
            {
                value=true;
            }
            else
            {
                if(value==true)
                    return false;
                q.push(p->left);
                q.push(p->right);
            }
        }
        return true;  
    }
};