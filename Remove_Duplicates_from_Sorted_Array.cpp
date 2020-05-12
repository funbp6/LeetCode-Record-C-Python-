class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        
        
        int cur = 0, move = 1;
        
        while(move < nums.size()){
            if (nums[move] != nums[cur])
                nums[++cur] = nums[move];
            move++;
            
        }
        return cur + 1;
    }
};