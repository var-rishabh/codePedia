class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (result.find(target - nums[i]) != result.end()) {
                return {result[target - nums[i]], i};
            }
            result[nums[i]] = i;
        }
        return {};
    }
};