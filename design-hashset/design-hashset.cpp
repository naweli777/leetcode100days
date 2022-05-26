class MyHashSet {
public:
    int modM = 1e9 +7;
    bool hash[1000001] = {false};
    MyHashSet() {
        
    }
    
    void add(int key) {
        hash[key % modM] = true;
    }
    
    void remove(int key) {
        hash[key % modM] = false;
    }
    
    bool contains(int key) {
        return hash[key % modM];
    }
};


/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */