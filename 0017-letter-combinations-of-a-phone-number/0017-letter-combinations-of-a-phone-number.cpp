class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (!digits.size()) {
            return {};
        }

        vector<string> combs{ "" }, next;
        vector<string> chars = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        for (char digit : digits) {
            int d = digit - '0';
            for (string comb : combs) {
                for (char ch : chars[d]) {
                    next.push_back(comb + ch);
                }
            }
            combs.swap(next);
            next.clear();
        }

        return combs;
    }
};