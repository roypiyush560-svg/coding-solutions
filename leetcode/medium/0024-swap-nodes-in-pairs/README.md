# Swap Nodes in Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

 

 **Example 1:** 

 **Input:**  head = [1,2,3,4]

 **Output:**  [2,1,4,3]

 **Explanation:** 

 **Example 2:** 

 **Input:**  head = []

 **Output:**  []

 **Example 3:** 

 **Input:**  head = [1]

 **Output:**  [1]

 **Example 4:** 

 **Input:**  head = [1,2,3]

 **Output:**  [2,1,3]

 

 **Constraints:** 

- The number of nodes in the list is in the range [0, 100].
- 0 <= Node.val <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.1 MB (beats 86.36%)  
**Submitted:** 2026-10-11T14:25:46.074Z  

```cpp
class Solution { public: ListNode* swapPairs(ListNode* h) { ListNode d(0,h),*p=&d; while(p->next&&p->next->next){auto a=p->next;auto b=a->next;a->next=b->next;b->next=a;p->next=b;p=a;}return d.next;} };
```

---

[View on LeetCode](https://leetcode.com/problems/swap-nodes-in-pairs/)