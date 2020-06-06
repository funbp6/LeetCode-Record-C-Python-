class Solution {
public:
    string decodeString(string s) {
        if (s == "") return {};
        stack<string> strs;
        
        for(char c : s){
            string cstr(1, c);
            if (isdigit(c) || isalpha(c)){
                strs.push(cstr);
                
            }
            if (c == '['){
                strs.push(cstr);
            }
            if (c == ']'){
                string tmp = "", addi = "";
                while (strs.top() != "["){
                    addi = strs.top() + addi;
                    strs.pop();
                }strs.pop();
                
                string times = "";
                while (!strs.empty() && isdigit(strs.top()[0])){
                    times = strs.top() + times;
                    strs.pop();
                }
                
                // cout << stoi(times) << " " << addi;
                for (int i = 0; i < stoi(times); i++){
                    tmp = addi + tmp;
                }
                // cout << tmp;
                strs.push(tmp);
            }
        }
        string ans = "";
        while (!strs.empty()){
            ans = strs.top() + ans;
            // cout << strs.top() << " ";
            strs.pop();
        }
        return ans;
    }
};