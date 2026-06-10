#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;

        for (int i : nums) {
            if (!set.insert(i).second) {
                return true;
            }
        }
        return false;
    }
};