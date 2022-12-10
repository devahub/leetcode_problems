
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
    
        if(root!=NULL){
               
        if(key<root->val)
            root->left=deleteNode(root->left,key);
        
        else if(key>root->val)
            root->right=deleteNode(root->right,key);
        
            
            
        else{                                            //   if root->val found
            if(root->left==NULL && root->right==NULL)
                return NULL;
            
            else if(root->left==NULL || root->right==NULL){
                return root->left? root->left:root->right;
            }
            
            
            TreeNode* temp=root->left;
            while(temp->right!=NULL)
                temp=temp->right;
            
            root->val=temp->val;
            root->left=deleteNode(root->left,temp->val);
            
        }   
    }
        return root;
    }
};