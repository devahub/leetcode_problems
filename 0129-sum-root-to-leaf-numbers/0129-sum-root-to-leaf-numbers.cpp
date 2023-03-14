/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
//     void solve(TreeNode* root,int temp,int &sum){
//         if(root==NULL){
//             return;
//         }
        
//          temp=temp*10+root->val;
        
//         if(root->left==NULL && root->right==NULL){
//             sum+=temp;
//         }
        
//         solve(root->left,temp,sum);
//         solve(root->right,temp,sum);
        
        
//     }
    
    
//     int sumNumbers(TreeNode* root) {
//         if(root==NULL)return 0;
        
//         int sum=0;
//         solve(root,0,sum);
//         return sum;
//     }
// };
    
    
    
    
    
    
    
    
    vector<string> answer;
    void preorder(TreeNode* root, string str){
        if(root == NULL){
            return;
        }
        if(root -> left == NULL and root -> right == NULL){
            str = str+to_string(root -> val);
            answer.push_back(str);
            return;
        }
        str = str+to_string(root -> val);
        preorder(root -> left,str);
        preorder(root -> right,str);
    }
    int sumNumbers(TreeNode* root) {
        string str;
        preorder(root,str);
        int sum = 0;
        for(int i = 0 ; i < answer.size(); i++){
            // reverse(answer[i].begin(), answer[i].end());
            int x = stoi(answer[i]);
            sum+=x;
        }
        return sum;
    }
};