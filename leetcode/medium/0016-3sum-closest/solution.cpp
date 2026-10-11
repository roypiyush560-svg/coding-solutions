class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int best = nums[0] + nums[1] + nums[2];
        for (int i = 0; i + 2 < nums.size(); ++i) {
            int left = i + 1, right = (int)nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (abs(sum - target) < abs(best - target)) best = sum;
                if (sum < target) ++left;
                else if (sum > target) --right;
                else return sum;
            }
        }
        return best;
    }
};