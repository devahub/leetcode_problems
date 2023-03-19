class TrieNode{
    public:
    TrieNode *links[26];
    bool flag = false;
    
    bool hasKey(char ch){
        return (links[ch-'a'] != NULL);
    }
    
    void put(char ch, TrieNode *node){
        links[ch - 'a'] = node;
    }
    
    TrieNode *get(char ch){
        return links[ch - 'a'];
    }
    
    void flagSwitch(){
        flag=true;
    }
    
    bool isEnd(){
        return flag == true;
    }
};

class WordDictionary {
public:
    TrieNode *root;
    WordDictionary() {
        root = new TrieNode();
    }
    
    
    
    void addWord(string word) {
        TrieNode *node  = root;
        for(int i=0;i<word.length();i++){
            if(!node->hasKey(word[i])){
                node->put(word[i],new TrieNode());
            }
            node = node->get(word[i]);
        }
        node->flagSwitch();
    }
    
    
    bool helper(string word, TrieNode *node){
        for(int i=0;i<word.length();i++){
            if(word[i]=='.'){
				
                for(char ch='a';ch<='z';ch++){
                    if(node->hasKey(ch) && helper(word.substr(i+1),node->get(ch))) 
                        return true;
                }
                return false;
            }
            else{
            if(!node->hasKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
            }
        }
        if(node->isEnd()) {
            return true; 
        }
        return false;     
    }
    
    
    bool search(string word) {
        TrieNode *node  = root;
        return helper(word,node);
    }
};