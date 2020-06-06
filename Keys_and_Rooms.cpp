class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int> visited;
        visited.insert(0);
        queue<int> q;
        for (int i: rooms[0])
            q.push(i);
        
        int keynum = 1;
        
        while (!q.empty()){
            int key = q.front(); q.pop();
            if (visited.count(key)) continue;
            visited.insert(key);
            for (int i=0; i < rooms[key].size(); i++){
                if (visited.count(rooms[key][i]) == 0)
                    q.push(rooms[key][i]);
            }
            keynum++;
        }
        // cout << keynum;
        return keynum == rooms.size();
    }
};