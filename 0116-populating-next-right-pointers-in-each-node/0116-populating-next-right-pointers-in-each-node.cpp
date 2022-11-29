

class Solution {
public:
    
    
// Now to connect the left subtree of same level with right subtree of that level
// The only new line that differentiate from level order traversing is that we need to connect the rightmost node of a level to the leftmost node of the next level.
    
    Node* connect(Node* root) {
        
        if(root==NULL)return root;
        queue<Node*>q;
        q.push(root);
        
     while(!q.empty()){
       int size=q.size();
         
         for(int i=0;i<size;i++){
             Node* temp=q.front();
             q.pop();
          
             if(i!=size-1){         // connecting rightmost to leftmost node of next level
                 temp->next=q.front();
             }
             
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);  
         }       
        }
     return root; 
    }
};