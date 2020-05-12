class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen = 0, tmplen = 0;
        
        // if (nums.empty()) return 0;
        // if (nums.size() == 1) return nums[0];
        
        for (int i = 0; i  < nums.size(); i++){
            if (nums[i] == 1){
                tmplen ++;
                if (tmplen > maxlen)
                    maxlen = tmplen;
            }
            else tmplen = 0;

        }
        
        return maxlen;
    
    }
};