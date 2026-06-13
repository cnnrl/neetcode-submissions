class Solution {
public:

    string encode(vector<string>& strs) {
        string res {};
        for (size_t i {}; i < strs.size(); ++i) {
            res += to_string(strs[i].size()) + "*" + strs[i];
        }

        return res;
    }
    // 7*abcdefg10*abcdefghij

    vector<string> decode(string s) {
        int i {0};
        int j {0};
        string nums {""};
        vector<string> res;
        while (i < s.size()) {
            if (s[j] == '*') {
                int len {stoi(nums)};
                nums = "";
                string sub {s.substr(j+1, len)};
                string str = "";
                for (int k {0}; k < sub.size(); ++k) {
                    str += sub[k];
                }
                res.push_back(str);
                j += len + 1;
                i = j;
                continue;
            }
            nums += s[j];
            ++j;
        }
        return res;
    }
};
