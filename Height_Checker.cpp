class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedh = heights;
        sort(sortedh.begin(), sortedh.end());
        
        int count = 0;
        for (int n:heights) cout << n;
        
        for (int i = 0; i < heights.size(); i++){
            if (heights[i] != sortedh[i]) count++;
        }
        
        return count;
    }
};