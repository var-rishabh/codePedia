class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l;
        int len = nums.size();
        for (int i = 0; i < len; i++) {
            if (nums[i] == val) {
                nums[i] = nums[len - 1];
                len--;
                i--;
            }
        }
        return len;
    }
};