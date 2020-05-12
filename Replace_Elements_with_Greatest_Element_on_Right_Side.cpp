class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() - 1;
        int maxi = arr[n];
        arr[n] = -1;
        
        for (int i = n-1; i >= 0; i--){
            // cout << arr[i+1];
            int tmp = maxi;
            if (arr[i] > maxi)
                maxi = arr[i];
            arr[i] = tmp;
        }
        return arr;
    }
};