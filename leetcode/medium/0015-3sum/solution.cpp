class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i + 2 < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = (int)nums.size() - 1;
            while (left < right) {
                long long sum = (long long)nums[i] + nums[left] + nums[right];
                if (sum < 0) ++left;
                else if (sum > 0) --right;
                else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    int a = nums[left], b = nums[right];
                    while (left < right && nums[left] == a) ++left;
                    while (left < right && nums[right] == b) --right;
                }
            }
        }
        return result;
    }
};