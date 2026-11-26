class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> s;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0) {
                pos.push_back(nums[i]);
            }
            else {
                neg.push_back(nums[i]);
            }
        }

        for(int i = 0; i < pos.size(); i++) {
            s.push_back(pos[i]);
            s.push_back(neg[i]);
        }

        return s;
    }
};