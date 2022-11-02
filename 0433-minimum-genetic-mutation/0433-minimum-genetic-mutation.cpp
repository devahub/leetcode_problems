class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        vector<char> mut = {'A','C','G','T'};


    // map is used to tell if a given word is a valid word and if it has been exploreed while doing BFS
    map<string, bool> visited;
    for(auto str: bank){
        visited[str] = false;
    }

    if(visited.find(end) == visited.end()){
        return -1;
    }

    queue<string> q;
    q.push(start);

    int ans = -1;
    
    while(!q.empty()){
        ans++;
        int n = q.size();

        // iterate over all strings in current level
        for(int i=0; i<n; i++){
            string curr = q.front();
            q.pop();

            if(curr==end){ 
                return ans;
            }

            // explore all nbrs
            for(int j=0; j<8; j++){
                char original_char = curr[j];

                for(int k=0; k<4; k++){
                    curr[j] = mut[k];
                    if(visited.find(curr)!=visited.end() && visited[curr]==false){
                       
                        q.push(curr);
                        visited[curr] = true;
                    }
                }

                curr[j] = original_char;
            }
        }
        
    }
    
    return -1;
        
        
        
    }
};