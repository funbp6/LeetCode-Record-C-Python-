class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if (A.size() < 3) {
            return false;
        }
        int m = 0;
        while (m + 1 < A.size() && A[m+1] > A[m]) m++;
        if (m + 1 == A.size() || m == 0) {
            return false;
        }
        while (m + 1 < A.size() && A[m+1] < A[m]) m++;
        return m + 1 == A.size();   
    }
};

auto speedup=[](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();