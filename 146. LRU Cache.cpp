class LRUCache {
    int _capacity;
    list<int> _keys;
    unordered_map<int,pair<int,list<int> :: iterator>> _map;
public:
    LRUCache(int capacity) : _capacity(capacity){
        
    }
    
    int get(int key) {
        if(_map.find(key) != _map.end()){
            _keys.erase(_map[key].second);
            _keys.push_front(key);
            _map[key].second = _keys.begin();
            return _map[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(_map.find(key) != _map.end()){
            _keys.erase(_map[key].second);
            _keys.push_front(key);
            _map[key] = {value, _keys.begin()};
        } else {
            if(_keys.size() == _capacity){
                _map.erase(_keys.back());
                _keys.pop_back();
            }
            _keys.push_front(key);
            _map[key] = {value, _keys.begin()};
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */