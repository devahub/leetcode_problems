struct Node{
    Node *links[26];
    bool flag=false;
    bool containskey(char ch){      // checks if char is previously present or not
        return  (links[ch-'a']!=NULL);
        
    }
    void put(char ch,   Node* node){        // put char in new node if not present previously
        links[ch-'a']=node;
    }
    Node* get(char ch){     // returns position of new char node formed
        return links[ch-'a'];
    }

     void setend(){     // set that word is formed so making flag true
        flag=true;
    }

     bool isend(){
        return flag;
    }
};

class Trie {
    private: Node* root;

public:
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        Node *node=root;
        for(int i=0;i<word.size();i++){
            if(!node->containskey(word[i])){        // if it is not present then create new node
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);        // gettting pos of new char making new node evertime
        }
         node->setend();    // calling setend because a new word is created so flag==true
    }
    
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containskey(word[i])){
                return false;
            }
            node=node->get(word[i]);
            
        }
        return node->isend();
    }
    
    bool startsWith(string prefix) {
         Node* node=root;
        for(int i=0;i<prefix.length();i++){
            if(!node->containskey(prefix[i])){
                return false;
            }
            node=node->get(prefix[i]);
            
        }
        return true;
    }
};
