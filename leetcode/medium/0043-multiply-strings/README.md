# Multiply Strings

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two non-negative integers `num1` and `num2` represented as strings, return the product of `num1` and `num2`, also represented as a string.

 **Note:**  You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

 **Example 1:** 

```
Input: num1 = "2", num2 = "3"
Output: "6"

```

 **Example 2:** 

```
Input: num1 = "123", num2 = "456"
Output: "56088"

```

 

 **Constraints:** 

- 1 <= num1.length, num2.length <= 200
- num1 and num2 consist of digits only.
- Both num1 and num2 do not contain any leading zero, except the number 0 itself.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 65.43%)  
**Memory:** 9.4 MB (beats 94.86%)  
**Submitted:** 2026-10-11T14:41:30.078Z  

```cpp
class Solution { public: string multiply(string a,string b){if(a=="0"||b=="0")return "0";int m=a.size(),n=b.size();vector<int> v(m+n);for(int i=m-1;i>=0;i--)for(int j=n-1;j>=0;j--){int x=(a[i]-'0')*(b[j]-'0')+v[i+j+1];v[i+j+1]=x%10;v[i+j]+=x/10;}string s;int i=0;while(i<v.size()&&!v[i])i++;for(;i<v.size();i++)s+=char('0'+v[i]);return s;} };
```

---

[View on LeetCode](https://leetcode.com/problems/multiply-strings/)