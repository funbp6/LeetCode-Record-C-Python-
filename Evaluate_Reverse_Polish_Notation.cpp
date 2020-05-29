class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_map<string, function<int (int, int) > > map = {
            {"+", [] (int a, int b) {return a+b;} },
            {"-", [] (int a, int b) {return a-b;} },
            {"*", [] (int a, int b) {return a*b;} },
            {"/", [] (int a, int b) {return a/b;} }
        };
        
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++){
            if (!map.count(tokens[i]))
                s.push(stoi(tokens[i]));
            else {
                int inta = s.top(); s.pop();
                int intb = s.top(); s.pop();
                s.push(map[tokens[i]](intb, inta));
            }
        }
        return s.top();
    }
};