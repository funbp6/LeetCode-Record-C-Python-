class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        for (int n : nums){
            if (n > first){
                third = second;
                second = first;
                first = n;
            }else if (n > second && n < first){
                third = second;
                second = n;
            }else if (n > third && n < second){
                third = n;
            }
        }
        if(third == LONG_MIN || third == second) return first;
        return third;
    }
};