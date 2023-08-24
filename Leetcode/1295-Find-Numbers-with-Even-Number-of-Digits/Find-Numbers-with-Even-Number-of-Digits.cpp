class Solution {
public:
    int findNumbers(vector<int> &nums) {
        int l = 0;
        int even = 0;
        for (int i = 0; i < nums.size(); i++) {
            l = to_string(nums[i]).length();
            if (l % 2 == 0) {
                even++;
            }
        }
        return even;
    }
};
