class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        const vector<string> letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> result;
        string current;
        function<void(int)> dfs = [&](int index) {
            if (index == digits.size()) { result.push_back(current); return; }
            for (char c : letters[digits[index] - '0']) {
                current.push_back(c);
                dfs(index + 1);
                current.pop_back();
            }
        };
        dfs(0);
        return result;
    }
};