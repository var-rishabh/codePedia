class Solution {
public:
    int maxFrequency(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int maxFrequency = 0;
        long long sum = 0;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while ((right - left + 1) * 1LL * nums[right] - sum > k) {
                sum -= nums[left];
                left++;
            }
            maxFrequency = max(maxFrequency, right - left + 1);
        }

        return maxFrequency;
    }
};