class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache = collections.OrderedDict()
        
    def get(self, key: int) -> int:
        if key in self.cache:
            v = self.cache[key]
            del self.cache[key]
            self.cache[key] = v
            return v
        else:
            return -1

    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            del self.cache[key] 
        
        elif self.capacity == len(self.cache):
            self.cache.popitem(False)
            
        self.cache[key] = value
     
        
        
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)