class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for (auto n : arr) {
            if ((n%2) == 0) {
                if (s.count(n/2)) return true;    
            }
            if (s.count(n*2)) return true;
            s.insert(n);
        }
        return false;
    }
};