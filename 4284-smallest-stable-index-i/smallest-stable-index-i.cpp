class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            ans = max(nums[i], ans);
            int mini = nums[i];
            for (int j = i; j < nums.size(); j++) {
                mini = min(mini, nums[j]);
            }
            int result = ans - mini;
            if (result <= k) {
                return i;
            }
        }
        return -1;
    }
};