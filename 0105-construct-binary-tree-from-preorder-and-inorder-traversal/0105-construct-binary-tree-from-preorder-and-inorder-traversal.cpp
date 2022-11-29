
class Solution {
public:
      TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        return solve(pre,in,0,in.size()-1);
    }
    
    int c=0;
    TreeNode* solve(vector<int>& pre, vector<int>& in,int start,int end)
    {
        if(start>end){
            return NULL;
        }
        
        TreeNode* x=new TreeNode(pre[c++]);
        int d=0;
        for(int i=start;i<=end;i++){
            if(x->val==in[i]){
                d=i;
                break;
            }
        }
        x->left=solve(pre,in,start,d-1);
        x->right=solve(pre,in,d+1,end);
        return x;
        
    } 
};