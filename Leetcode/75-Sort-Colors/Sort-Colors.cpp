class Solution {
public:
    void sortColors(vector<int> &nums) {
        int zeroPos = 0;
        int onePos = 0;
        int twoPos = nums.size() - 1;

        while (onePos <= twoPos) {
            if (nums[onePos] == 1) {
                onePos++;
            } else if (nums[onePos] == 0) {
                swap(nums[zeroPos], nums[onePos]);
                zeroPos++;
                onePos++;
            } else {
                swap(nums[onePos], nums[twoPos]);
                twoPos--;
            }
        }
    }
};