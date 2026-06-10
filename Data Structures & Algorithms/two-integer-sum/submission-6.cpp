class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diffs {};
        for (int i {0}; i < nums.size(); ++i) {
            if (diffs.contains(nums[i])) {
                return vector<int> {diffs[nums[i]], i};
            }
            diffs[target-nums[i]] = i;
        }
        return vector<int> {0, 0};
    }
};
