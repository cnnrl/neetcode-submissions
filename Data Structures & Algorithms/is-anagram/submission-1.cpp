class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char, int> s_count {};
        std::unordered_map<char, int> t_count {};
        for (size_t i {0}; i < s.length(); ++i) {
            if (s_count.contains(s[i])) {
                s_count[s[i]]++;
            } else {
                s_count[s[i]] = 1;
            }
            if (t_count.contains(t[i])) {
                t_count[t[i]]++;
            } else {
                t_count[t[i]] = 1;
            }
        }
        for (const auto& pair : s_count) {
            if (pair.second != t_count[pair.first]) {
                return false;
            }
        }
        return true;
    }
};
