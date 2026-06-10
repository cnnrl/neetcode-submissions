#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        std::unordered_map<char, int> smap {};
        std::unordered_map<char, int> tmap {};
        for (int i = 0; i < s.size(); ++i) {
            smap[s[i]] += 1;
            tmap[t[i]] += 1;
        }
        for (auto i : smap) {
            if (i.second != tmap[i.first]) {
                return false;
            }
        }

        return true;
    }
};
