class Solution
{
    public:
   	//recursive soln
   	    void solve(Node* root,vector<int>&res)
   	   {

   	       if(root==NULL)return;               	// base condition

   	       res.push_back(root->val);               	// inserting root value first 

   	       for(auto i:root->children){                     	// inserting roots children
   	           solve(i,res);
   	       }
   	    }

   	   vector<int> preorder(Node* root) {
   	    vector < int>res;
   	   solve(root,res);
   	   return res;
       }
};

   	// iterative soln------->
   	//    vector<int> preorder(Node* root) {      
   	//         vector<int> ans;

   	// 	    if (root==NULL) return ans;

   	// 	    stack<Node*> s; 
   	//         s.push(root);  

   	// 	    while (!s.empty()) {                  
   	// 		auto Top = s.top(); s.pop();    
   	// 		ans.push_back(Top -> val);      

   	// 		for (auto it = rbegin(Top -> children); it != rend(Top -> children); it++) 
   	// 			s.push(*it);
   	// 	}
   	// 	return ans;
   	//     }
   	// };