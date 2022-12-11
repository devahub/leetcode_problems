
class Solution {
public:

    
    vector<vector<int>>ans;
    vector<int>v;
    
    void solve(TreeNode* root,int target,int sum){
        if(root==NULL){
            return;
        }
        
        sum+=root->val;
        v.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL){
            if(target==sum){
                ans.push_back(v);
            }
        }
        else{
            solve(root->left,target,sum);
            solve(root->right,target,sum);
        }
         v.pop_back();       
    }

    
    
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        solve(root,target,0);
        return ans;  
        
    }
};