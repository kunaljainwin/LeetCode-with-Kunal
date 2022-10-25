class MyHashSet {
    private:
    map<int,int>maps;
public:
    
    MyHashSet() {
        
    }
    
    void add(int key) {
        maps[key]=1;
    }
    
    void remove(int key) {
        maps[key]=0;

    }
    
    bool contains(int key) {
         
        
        return maps[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */