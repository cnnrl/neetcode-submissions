class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count {{}};
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> res;

        for (size_t i {0}; i < nums.size(); ++i) {
            count[nums[i]]++;
        }
        for (const auto& pair : count) {
            freq[pair.second].push_back(pair.first);
        }
        for (size_t i {freq.size() - 1}; i >= 0 && res.size() < k; --i) {
            for (int n : freq[i]) {
                res.push_back(n);

                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
