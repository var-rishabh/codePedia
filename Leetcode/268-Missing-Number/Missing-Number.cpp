class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int s2=n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return s2-sum;
    }
};