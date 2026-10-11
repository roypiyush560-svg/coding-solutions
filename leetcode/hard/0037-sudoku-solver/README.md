# Sudoku Solver

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy  **all of the following rules** :

- Each of the digits 1-9 must occur exactly once in each row.
- Each of the digits 1-9 must occur exactly once in each column.
- Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.

The `'.'` character indicates empty cells.

 

 **Example 1:** 

```
Input: board = [["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]
Output: [["5","3","4","6","7","8","9","1","2"],["6","7","2","1","9","5","3","4","8"],["1","9","8","3","4","2","5","6","7"],["8","5","9","7","6","1","4","2","3"],["4","2","6","8","5","3","7","9","1"],["7","1","3","9","2","4","8","5","6"],["9","6","1","5","3","7","2","8","4"],["2","8","7","4","1","9","6","3","5"],["3","4","5","2","8","6","1","7","9"]]
Explanation: The input board is shown above and the only valid solution is shown below:

```

 

 **Constraints:** 

- board.length == 9
- board[i].length == 9
- board[i][j] is a digit or '.'.
- It is guaranteed that the input board has only one solution.

## Solution

**Language:** C++  
**Runtime:** 346 ms (beats 46.80%)  
**Memory:** 8.9 MB (beats 32.40%)  
**Submitted:** 2026-10-11T14:35:01.152Z  

```cpp
class Solution { public: void solveSudoku(vector<vector<char>>& b){function<bool()> dfs=[&](){for(int i=0;i<9;i++)for(int j=0;j<9;j++)if(b[i][j]=='.'){for(char d='1';d<='9';d++){bool ok=true;for(int k=0;k<9;k++)if(b[i][k]==d||b[k][j]==d||b[i/3*3+k/3][j/3*3+k%3]==d){ok=false;break;}if(ok){b[i][j]=d;if(dfs())return true;b[i][j]='.';}}return false;}return true;};dfs();} };
```

---

[View on LeetCode](https://leetcode.com/problems/sudoku-solver/)