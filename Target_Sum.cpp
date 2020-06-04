class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        return findSum(nums, S, 0);
    }
    
    int findSum(vector<int>& nums, long sum, int index){
        if (index == nums.size()){
            if (sum == 0) return 1;
            else return 0;
        }
        return findSum(nums, sum + nums[index], index+1) + 
            findSum(nums, sum - nums[index], index+1);
    }
};