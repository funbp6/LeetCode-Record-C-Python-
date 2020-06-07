class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) return {1};
        if (rowIndex == 1) return {{1,1}};
        
        vector<int> ans(rowIndex+1, 1);
        for (int i = 1; i < rowIndex; i++){
            int prev = 1;
            for (int k = 1; k <= i; k++){
                ans[k] = prev + ans[k];
                prev = ans[k] - prev;
                
            }
            for (int n:ans)
                cout << n << " ";
            cout << endl;
            
        }
        return ans;
    }
};