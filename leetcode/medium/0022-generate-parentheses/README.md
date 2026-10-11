# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 65.47%)  
**Memory:** 14 MB (beats 68.17%)  
**Submitted:** 2026-10-11T14:24:39.823Z  

```cpp
class Solution { public: vector<string> generateParenthesis(int n) { vector<string> ans; string s; function<void(int,int)> dfs=[&](int o,int c){ if((int)s.size()==2*n){ans.push_back(s);return;} if(o<n){s.push_back('(');dfs(o+1,c);s.pop_back();} if(c<o){s.push_back(')');dfs(o,c+1);s.pop_back();} }; dfs(0,0); return ans; } };
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)