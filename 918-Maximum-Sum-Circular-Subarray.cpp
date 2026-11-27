
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;

        int currMax = 0;
        int currMin = 0;

        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];

            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(minSum, currMin);
        }


        if(maxSum < 0) {
            return maxSum;
        }

        return max(maxSum, total - minSum);
    }
};
