class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last = nums.size() - 1, nv = 0;
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return (nums[0] == val) ? 0 : 1;
        
        while(last >= 0 && nums[last] == val) last --; 
        // cout << last;
        while(nv <= last){
            if(nums[nv] == val){
                nums[nv] = nums[last];
                nums[last] = val;
                while(nums[last] == val && last >= 0) last --;
                // cout << "==val" <<endl;
            }
            else if (nums[nv] != val){
                nv++;
                // cout<< "!=val" << endl;
            }
        }
        // cout <<nv << last <<endl;
        // for (auto n:nums) cout << n ;
        
        return nv;
    }
};