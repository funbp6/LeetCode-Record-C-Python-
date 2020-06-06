class Solution {
public:
    void reverseString(vector<char>& s) {
           
        rs(s, 0, s.size()-1);
    }
    void rs(vector<char>& s, int l, int r){
        if (l > r) return;
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        rs(s, l+1, r-1);
    }
};