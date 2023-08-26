class Solution {
public:
    int singleNumber(vector<int> &nums) {
        int xOr = 0;
        for (int i = 0; i < nums.size(); i++) {
            xOr ^= nums[i];
        }
        return xOr;
    }
};