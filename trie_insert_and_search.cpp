void insert(struct TrieNode *root, string key) {
    // code here
    TrieNode *curr=root;
    int index;
    
    for(int i=0;i<key.size();i++){
        int index=key[i]-'a';
        if(curr->children[index]==nullptr){
            curr->children[index]=getNode();
            curr->children[index]->isLeaf=false;
        }
        if(i==key.size()-1){
            curr->children[index]->isLeaf=true;
        }
        curr=curr->children[index];
    }
    
}

// root : root node of the trie
// key : string to search in the trie
// Returns true if key presents in trie, else false

bool search(struct TrieNode *root, string key) {
    TrieNode *curr=root;
    for(int i=0;i<key.size();i++){
        int index=key[i]-'a';
        if(curr->children[index]==nullptr) return false;
        curr=curr->children[index];
    }
    return curr->isLeaf;
}
