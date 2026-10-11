class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= (int)s.size()) return s;
        vector<string> rows(min(numRows, (int)s.size()));
        int row = 0, direction = -1;
        for (char c : s) {
            rows[row] += c;
            if (row == 0 || row == numRows - 1) direction = -direction;
            row += direction;
        }
        string result;
        for (const string& part : rows) result += part;
        return result;
    }
};