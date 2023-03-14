class MyHashMap {
public:
    unordered_map<int,int>umap;
    MyHashMap() {
    }
    
    void put(int key, int value) {
        umap[key] = value;
    }
    
    int get(int key) {
        auto temp = umap.find(key);
        if(temp == umap.end())
            return -1;
        return temp->second;
    }
    
    void remove(int key) {
        umap.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */