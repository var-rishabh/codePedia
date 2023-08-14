class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cons = 0;
        int count = 0;
        for (auto i : nums) {
            if (i == 1) {
                ++count;
            } else {
                count = 0;
            }
            cons = max(cons, count);
        }
        return cons;
    }
};