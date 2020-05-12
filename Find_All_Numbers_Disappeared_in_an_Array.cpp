class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != nums[nums[i]-1]){
                int tmp = nums[nums[i]-1];
                nums[nums[i]-1] = nums[i];
                nums[i] = tmp;
                i--;
            }
        }
        vector<int> ans;
        for (int i = 1; i <= nums.size(); i++){
            if (i != nums[i-1]) ans.push_back(i);
        }
        return ans;
    }
};