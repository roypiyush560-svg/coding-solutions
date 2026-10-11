class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, best = 0, n = s.size();
        auto expand = [&](int l, int r) {
            while (l >= 0 && r < n && s[l] == s[r]) {
                if (r - l + 1 > best) { start = l; best = r - l + 1; }
                --l; ++r;
            }
        };
        for (int i = 0; i < n; ++i) { expand(i, i); expand(i, i + 1); }
        return s.substr(start, best);
    }
};