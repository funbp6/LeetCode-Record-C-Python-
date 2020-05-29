class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> s;
        vector<int> ans(T.size(), 0);
        s.push(0);
        for (int i = 1; i < T.size(); i++){
            while(!s.empty() && T[i] > T[s.top()]){
                ans[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};