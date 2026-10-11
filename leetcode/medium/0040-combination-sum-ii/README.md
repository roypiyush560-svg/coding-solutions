# Combination Sum II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may only be used  **once**  in the combination.

 **Note:**  The solution set must not contain duplicate combinations.

 

 **Example 1:** 

```
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

```

 **Example 2:** 

```
Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]

```

 

 **Constraints:** 

- 1 <= candidates.length <= 100
- 1 <= candidates[i] <= 50
- 1 <= target <= 30

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 14.5 MB (beats 15.20%)  
**Submitted:** 2026-10-11T14:37:40.325Z  

```cpp
class Solution { public: vector<vector<int>> combinationSum2(vector<int>& a,int target){sort(a.begin(),a.end());vector<vector<int>> out;vector<int> cur;function<void(int,int)> dfs=[&](int i,int rem){if(!rem){out.push_back(cur);return;}for(int j=i;j<a.size()&&a[j]<=rem;j++){if(j>i&&a[j]==a[j-1])continue;cur.push_back(a[j]);dfs(j+1,rem-a[j]);cur.pop_back();}};dfs(0,target);return out;} };
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum-ii/)