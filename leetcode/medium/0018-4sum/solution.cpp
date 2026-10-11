class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for (int i = 0; i < n - 3; ++i) {
            if (i && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1, right = n - 1;
                while (left < right) {
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum < target) ++left;
                    else if (sum > target) --right;
                    else {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        int a = nums[left], b = nums[right];
                        while (left < right && nums[left] == a) ++left;
                        while (left < right && nums[right] == b) --right;
                    }
                }
            }
        }
        return result;
    }
};