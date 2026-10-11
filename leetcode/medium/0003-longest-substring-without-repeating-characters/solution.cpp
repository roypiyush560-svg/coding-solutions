class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int start = 0, best = 0;
        for (int i = 0; i < (int)s.size(); ++i) {
            unsigned char c = s[i];
            start = max(start, last[c] + 1);
            best = max(best, i - start + 1);
            last[c] = i;
        }
        return best;
    }
};