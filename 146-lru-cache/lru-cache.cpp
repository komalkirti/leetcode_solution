class LRUCache {
public:
   unordered_map<int, pair<int, list<int>::iterator>>m;
    int c;
    list<int>v;
    LRUCache(int capacity) {
        c=capacity;
        
    }
    
    int get(int key) {
        
        if(m.count(key)!=0){
            v.erase(m[key].second);
            v.push_front(key);
            m[key]={m[key].first,v.begin()};
            return m[key].first;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        
        if(m.count(key)!=0){
            v.erase(m[key].second);
            v.push_front(key);
             m[key]={value, v.begin()};
            return ;
        }
        
        if(m.size()==c){
            m.erase(v.back());
            v.pop_back();
        }
        v.push_front(key);
        m[key]={value, v.begin()};
        
        
        
    }

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */