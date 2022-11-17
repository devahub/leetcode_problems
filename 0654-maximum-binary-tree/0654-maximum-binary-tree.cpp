
class Solution {
public:

    
    TreeNode* solve(vector<int>v,int s, int e){
        int maxi=-1;
        int maxi_index;
        if(s>e)                             // base condition
             return 0;
        
       for(int i=s;i<=e;i++){
           if(v[i]>maxi)                       
            {
                maxi=v[i];
                maxi_index=i;
            }
       }
        
        TreeNode* r=new TreeNode(maxi);
        r->left=solve(v,s,maxi_index-1);
        r->right=solve(v,maxi_index+1,e);
        return r;
        
    }
    

    TreeNode* constructMaximumBinaryTree(vector<int>& nums){
        return solve(nums,0,nums.size()-1);
        
    }
};