class Solution {
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        vector<int> sorted;

        for (auto num : nums1)
            sorted.push_back(num);

        for (auto num : nums2)
            sorted.push_back(num);

        sort(sorted.begin(), sorted.end());     // O(nlogn)

        double median;
        int len = sorted.size();
        if (len % 2 == 0) {
            median = (sorted[(len / 2) - 1] + sorted[(len / 2)]) / 2.0;
        } else {
            median = sorted[len / 2];
        }

        return median;
    }
};