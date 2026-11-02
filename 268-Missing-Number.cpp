class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int sum2=0;
         sum=nums.size()*(nums.size()+1);
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
        }
        return sum/2-sum2;
    }
};