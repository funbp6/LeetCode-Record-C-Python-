class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        string start = "0000";
        unordered_set<string> dead(deadends.begin(), deadends.end());
        if (dead.count(start)) return -1;
        if (start == target) return 0;
        
        queue<string> q{{start}};
        unordered_set<string> visited{start};
        
        int steps = 0;
        while(!q.empty()){
            steps++;
            int qsize = q.size();
            for(int i = 0; i < qsize; i++){
                string cur = q.front(); q.pop();
                
                for (int k = 0; k < 4; k++){
                    for (int j = -1; j <= 1; j+=2){
                        string next = cur;
                        next[k] = (next[k] - '0' + j + 10) % 10 + '0';
                        if (next == target) return steps;
                        if (dead.count(next) || visited.count(next)) continue;
                        visited.insert(next);
                        q.push(next);
                    }
                }
            }
            
        }
        return -1;
    }
};