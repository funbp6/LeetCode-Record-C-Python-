#include<math.h>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        if (A.size() == 1){
            A[0] = A[0] * A[0];
            return A;
        }
        
        vector<int> ans;
        int negptr = 0;
        while(A[negptr] < 0){
            negptr++;
        }
        int posptr = negptr;
        negptr --;
        
        while(negptr >= 0 && posptr < A.size()){
            int negpow = A[negptr] * A[negptr], pospow = A[posptr] * A[posptr];
            
            if (negpow > pospow){
                ans.push_back(pospow);
                posptr ++;
            }else{
                ans.push_back(negpow);
                negptr --;
            }
        }
        // cout << negptr << " " << posptr;
        while(negptr >= 0){
            ans.push_back(A[negptr] * A[negptr]);
            negptr --;
        }
        while(posptr < A.size()){
            ans.push_back(A[posptr] * A[posptr]);
            posptr ++;
        }
        return ans;
    }
};