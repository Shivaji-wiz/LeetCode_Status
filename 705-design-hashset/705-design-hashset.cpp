class MyHashSet {
public:
    vector<bool>TF;
    MyHashSet() {
        const int n = 1000001;
        TF.resize(n);
    }
    
    void add(int key) {
        TF[key] = true;
    }
    
    void remove(int key) {
        TF[key] = false;
    }
    
    bool contains(int key) {
        return TF[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */