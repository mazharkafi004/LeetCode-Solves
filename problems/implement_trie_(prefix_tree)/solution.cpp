class Trie {
public:
    vector<string>trie;
    Trie() {
        
    }
    
    void insert(string word) {
        trie.push_back(word);
    }
    
    bool search(string word) {
        bool a =  find(trie.begin(), trie.end(), word) != trie.end();
        return a;
    }
    
    bool startsWith(string prefix) {
        int n = trie.size();
        for(int i=0;i<n;i++){
            if (trie[i].rfind(prefix, 0) == 0) { 
            return true;
        }
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */