class Solution {
public:
    bool isValid(string s) {
        if (s.empty()) return true;
        stack<char> ps;
        unordered_set<char> set = {'(', '{', '['};
        unordered_map<char, char> map = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        for (string::iterator it = s.begin(); it != s.end() ; ++it){
            if (set.count(*it)) ps.push(*it);
            else{
                if (ps.empty()) return false;
                if (map[ps.top()] == *it){
                    ps.pop();
                }
                else return false;
            }
        }
        
        return ps.empty();
    }
};