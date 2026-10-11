# Remove Nth Node From End of List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the `head` of a linked list, remove the `nth` node from the end of the list and return its head.

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

```

 **Example 2:** 

```
Input: head = [1], n = 1
Output: []

```

 **Example 3:** 

```
Input: head = [1,2], n = 1
Output: [1]

```

 

 **Constraints:** 

- The number of nodes in the list is sz.
- 1 <= sz <= 30
- 0 <= Node.val <= 100
- 1 <= n <= sz

 

 **Follow up:**  Could you do this in one pass?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.1 MB (beats 25.63%)  
**Submitted:** 2026-10-11T14:22:15.299Z  

```cpp
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head);
        ListNode* fast = &dummy;
        ListNode* slow = &dummy;
        for (int i = 0; i < n; ++i) fast = fast->next;
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy.next;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)