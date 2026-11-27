class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<long long> st(nums.begin(), nums.end());

        int longest = 0;

        for(auto x : st) {

            // Check if x is the starting element
            if(st.find(x - 1) == st.end()) {
                int cnt = 1;

                while(st.find(x + 1) != st.end()) {
                    x++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};