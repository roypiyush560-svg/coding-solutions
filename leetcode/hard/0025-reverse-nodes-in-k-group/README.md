# Reverse Nodes in k-Group

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given the `head` of a linked list, reverse the nodes of the list `k` at a time, and return  *the modified list*.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k` then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]

```

 **Example 2:** 

```
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= k <= n <= 5000
- 0 <= Node.val <= 1000

 

 **Follow-up:**  Can you solve the problem in `O(1)` extra memory space?

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-10-11T14:26:47.413Z  

```cpp
class Solution { public: ListNode* reverseKGroup(ListNode* h,int k){ ListNode d(0,h),*groupPrev=&d; while(true){auto kth=groupPrev; for(int i=0;i<k&&kth;i++)kth=kth->next; if(!kth)break; auto next=kth->next; ListNode* prev=next; ListNode* cur=groupPrev->next; while(cur!=next){auto t=cur->next;cur->next=prev;prev=cur;cur=t;} auto old=groupPrev->next;groupPrev->next=kth;groupPrev=old;}return d.next;} };
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-nodes-in-k-group/)