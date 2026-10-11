# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

 

 **Example 1:** 

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

```

 **Example 2:** 

```
Input: height = [4,2,0,3,2,5]
Output: 9

```

 

 **Constraints:** 

- n == height.length
- 1 <= n <= 2 * 104
- 0 <= height[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 26 MB (beats 77.44%)  
**Submitted:** 2026-10-11T14:38:51.224Z  

```cpp
class Solution { public: int trap(vector<int>& h){int l=0,r=h.size()-1,lm=0,rm=0,ans=0;while(l<r){if(h[l]<h[r]){lm=max(lm,h[l]);ans+=lm-h[l++];}else{rm=max(rm,h[r]);ans+=rm-h[r--];}}return ans;} };
```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)