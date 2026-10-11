# Median of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return  **the median**  of the two sorted arrays.

The overall run time complexity should be `O(log (m+n))`.

 

 **Example 1:** 

```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

```

 **Example 2:** 

```
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

```

 

 **Constraints:** 

- nums1.length == m
- nums2.length == n
- 0 <= m <= 1000
- 0 <= n <= 1000
- 1 <= m + n <= 2000
- -106 <= nums1[i], nums2[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 95 MB (beats 78.80%)  
**Submitted:** 2026-10-11T13:49:45.096Z  

```cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size(), n = nums2.size(), lo = 0, hi = m;
        while (lo <= hi) {
            int i = lo + (hi - lo) / 2;
            int j = (m + n + 1) / 2 - i;
            int left1 = (i == 0 ? INT_MIN : nums1[i - 1]);
            int right1 = (i == m ? INT_MAX : nums1[i]);
            int left2 = (j == 0 ? INT_MIN : nums2[j - 1]);
            int right2 = (j == n ? INT_MAX : nums2[j]);
            if (left1 <= right2 && left2 <= right1) {
                if ((m + n) % 2) return max(left1, left2);
                return (max(left1, left2) + (double)min(right1, right2)) / 2.0;
            }
            if (left1 > right2) hi = i - 1; else lo = i + 1;
        }
        return 0.0;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/)