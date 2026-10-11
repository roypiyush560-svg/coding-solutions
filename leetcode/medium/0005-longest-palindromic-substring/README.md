# Longest Palindromic Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, return  *the longest*   *palindromic*   *substring*  in `s`.

 

 **Example 1:** 

```
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

```

 **Example 2:** 

```
Input: s = "cbbd"
Output: "bb"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consist of only digits and English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.7 MB  
**Submitted:** 2026-10-11T13:52:05.335Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/)