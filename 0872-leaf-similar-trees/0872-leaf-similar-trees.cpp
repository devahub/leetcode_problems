class Solution
{
    public:

       	// recurssive soln----->

        // void solve(TreeNode *root, vector<int> &v)
        // {
           	//         if(root==NULL){
           	//             return ;
           	//         }

           	//         if(root->left==NULL && root->right==NULL){
           	//             v.push_back(root->val);
           	//         }
           	//         solve(root->left,v);
           	//         solve(root->right,v);
           	//     }

           	//     bool leafSimilar(TreeNode* root1, TreeNode* root2) {
           	//         vector < int>v1;
           	//         vector < int>v2;

           	//         solve(root1,v1);
           	//         solve(root2,v2);

           	//         return v1==v2;
           	//     }
           	// };

            
            
            
            
            
            
            
           	// iterative approach----->

            vector<int>solve(TreeNode *root)
            {
                vector<int>v;
                stack<TreeNode*> s({ root });
                while (!s.empty())
                {
                    root = s.top();
                    s.pop();
                    size_t size = s.size();
                    if (root->right) 
                        s.push(root->right);
                    if (root->left) 
                        s.push(root->left);
                    if (s.size() == size) 
                        v.push_back(root->val);
                }
                return v;
            }

            bool leafSimilar(TreeNode *root1, TreeNode *root2)
            {
                return solve(root1) == solve(root2);
            }
        };