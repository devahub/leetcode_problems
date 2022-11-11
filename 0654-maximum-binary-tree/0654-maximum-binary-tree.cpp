
class Solution {
public:

    
    TreeNode* solve(vector<int>v,int s, int e){
        int maxi=-1;
        int in;
        if(s>e)                             // base condition
             return 0;
        
       for(int i=s;i<=e;i++){
           if(v[i]>maxi)                       
            {
                maxi=v[i];
                in=i;
            }
       }
        
        TreeNode* r=new TreeNode(maxi);
        r->left=solve(v,s,in-1);
        r->right=solve(v,in+1,e);
        return r;
        
    }
    

    TreeNode* constructMaximumBinaryTree(vector<int>& nums){
        return solve(nums,0,nums.size()-1);
        
    }
};