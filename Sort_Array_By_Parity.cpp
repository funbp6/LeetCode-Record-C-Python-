class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        if (A.size() == 0 || A.size() == 1) return A;
        
        int even = 0, odd = A.size() -1;
        
        while (even < odd){
            while (even < A.size() && A[even] % 2 == 0) even++;
            while (odd > 0 && A[odd] % 2 == 1) odd --;
            // cout << even << " " << odd << endl;
            
            if (even <= odd){
                int tmp = A[even];
                A[even] = A[odd];
                A[odd] = tmp;
            }
            
        }
        // for(int n:A) cout << n;
        return A;
    }
};