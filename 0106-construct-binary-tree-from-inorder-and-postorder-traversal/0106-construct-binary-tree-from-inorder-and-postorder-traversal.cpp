
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
    return solve(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1, mp);    
    }
    
    
    TreeNode* solve(vector<int>& inorder,vector<int>& postorder,int inorderStart, int inorderEnd, int postorderStart, int postorderEnd, unordered_map<int, int>& mp){
        
        if (inorderStart > inorderEnd || postorderStart > postorderEnd) {
            return NULL;
        }
        
        int rootval=postorder[postorderEnd];
        TreeNode* root = new TreeNode(rootval);
        
        int inorderRootIndex = mp[rootval];
        int leftSubtreeSize = inorderRootIndex - inorderStart;
        
        root->left = solve(inorder, postorder, inorderStart, inorderRootIndex - 1, postorderStart, postorderStart + leftSubtreeSize - 1, mp);
        root->right = solve(inorder, postorder, inorderRootIndex + 1, inorderEnd, postorderStart + leftSubtreeSize, postorderEnd - 1, mp);
        return root;
    }
    
};