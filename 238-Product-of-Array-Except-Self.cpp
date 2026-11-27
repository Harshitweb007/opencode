class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int mul = 1;
        int cnt = 0;
        int k = 1;

        for(int i = 0; i < nums.size(); i++) {
            mul *= nums[i];

            if(nums[i] == 0) {
                cnt++;
            }
        }

        if(cnt == 1) {
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] != 0) {
                    k *= nums[i];
                }
            }

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == 0) {
                    ans.push_back(k);
                }
                else {
                    ans.push_back(0);
                }
            }
            return ans;
        }

        if(cnt >= 2) {
            return vector<int>(nums.size(), 0);
        }

        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(mul / nums[i]);
        }

        return ans;
    }
};