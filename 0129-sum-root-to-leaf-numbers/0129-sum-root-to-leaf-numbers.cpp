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
    
    
    
    
    
    
    
    
//     vector<string> answer;
//     void preorder(TreeNode* root, string str){
//         if(root == NULL){
//             return;
//         }
//         if(root -> left == NULL and root -> right == NULL){
//             str = str+to_string(root -> val);
//             answer.push_back(str);
//             return;
//         }
//         str = str+to_string(root -> val);
//         preorder(root -> left,str);
//         preorder(root -> right,str);
//     }
//     int sumNumbers(TreeNode* root) {
//         string str;
//         preorder(root,str);
//         int sum = 0;
//         for(int i = 0 ; i < answer.size(); i++){
//             // reverse(answer[i].begin(), answer[i].end());
//             int x = stoi(answer[i]);
//             sum+=x;
//         }
//         return sum;
//     }
// };
    
    
    
    
    
    // 3 approach---->
    
    
      int gans=0;
    void solve(TreeNode* root,string s)
     {
        if(root==NULL)
            return;
        
        
        //As we reach the leaf node add that leaf node in string and convert the resultant string to int and addd to gans(global answer)
        
        if(root->right==NULL&&root->left==NULL)
        {
            s+=to_string(root->val);
                    
            int temp=stoi(s);
          gans+=temp;
            return;
         }
        
        //if node is not leaf node just add its value in string and pass it to left and right subtree
        
           s+=to_string(root->val);
           solve(root->left,s);
            solve(root->right,s);
        
    }
    
    
    
    int sumNumbers(TreeNode* root) {
        
        //Passing empty string to find integer made by each path
        
        solve(root,"");
        
    
       
        //return the global answer
        
        return gans;
        
        
        
    }
};