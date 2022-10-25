
class Solution {
public:
//    ListNode *detectCycle(ListNode *head) {
//         

//         if(head==NULL ||  head->next==NULL)
//             return NULL;
        
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
            
//             if(slow==fast)
//                 break;                  // cycle found
//         }
        
//         if(slow!=fast)
//             return NULL;                    // cycle not found
        
// // Alternatively, we know now for a fact that there is a cycle, so we reset turtle to be head (and notice we do NOT touch hare), run again our race and finally return the value of turtle, which will also reveal the beginning of the cycle!
//         slow=head;
//         while(slow!=fast){                      
//             slow=slow->next;
//             fast=fast->next;
            
//         }
//         return slow;
//     }
// };
    
    
    // using hashmap--->
     ListNode *detectCycle(ListNode *head){
        unordered_map<ListNode*,bool>mp;
         
         while(head!=NULL){             // if the number is already marked true return that number
             if(mp[head]==true){           
                 return head;
             }
             
             mp[head]=true;             // if not then mark true
             head=head->next;
         }
         return NULL;
     }
};
    
    
    