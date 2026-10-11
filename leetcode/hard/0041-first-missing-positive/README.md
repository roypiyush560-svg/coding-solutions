# First Missing Positive

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an unsorted integer array `nums`. Return the  *smallest positive integer*  that is  *not present*  in `nums`.

You must implement an algorithm that runs in `O(n)` time and uses `O(1)` auxiliary space.

 

 **Example 1:** 

```
Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

```

 **Example 2:** 

```
Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.

```

 **Example 3:** 

```
Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -231 <= nums[i] <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 54.9 MB (beats 98.57%)  
**Submitted:** 2026-10-11T14:38:19.952Z  

```cpp
class Solution { public: int firstMissingPositive(vector<int>& a){int n=a.size();for(int i=0;i<n;i++)while(a[i]>=1&&a[i]<=n&&a[a[i]-1]!=a[i])swap(a[i],a[a[i]-1]);for(int i=0;i<n;i++)if(a[i]!=i+1)return i+1;return n+1;} };
```

---

[View on LeetCode](https://leetcode.com/problems/first-missing-positive/)