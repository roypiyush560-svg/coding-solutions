class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size(), sign = 1;
        while (i < n && s[i] == ' ') ++i;
        if (i < n && (s[i] == '+' || s[i] == '-')) { if (s[i] == '-') sign = -1; ++i; }
        long long value = 0;
        while (i < n && isdigit((unsigned char)s[i])) {
            value = value * 10 + (s[i] - '0');
            long long signedValue = sign * value;
            if (signedValue > INT_MAX) return INT_MAX;
            if (signedValue < INT_MIN) return INT_MIN;
            ++i;
        }
        return (int)(sign * value);
    }
};