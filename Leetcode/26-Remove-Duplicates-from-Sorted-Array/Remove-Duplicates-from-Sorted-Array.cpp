class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.empty())nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
};