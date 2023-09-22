# Matrix Summation

- El problema se encuentra [aquí](https://www.spoj.com/problems/MATSUM/en/)

### Enunciado (en inglés)

A $N × N$ matrix is filled with numbers. BuggyD is analyzing the matrix, and he wants the sum of certain submatrices every now and then, so he wants a system where he can get his results from a query. Also, the matrix is dynamic, and the value of any cell can be changed with a command in such a system.

Assume that initially, all the cells of the matrix are filled with 0. Design such a system for BuggyD. Read the input format for further details.

### Input

The first line of the input contains an integer $t$, the number of test cases. $t$ test cases follow.

The first line of each test case contains a single integer $N$ $(1 \leq N \leq 1024)$, denoting the size of the matrix.

A list of commands follows, which will be in one of the following three formats (quotes are for clarity):

- $SET$ $x$ $y$ $num$ - Set the value at cell $(x, y)$ to $num$ $(0 \leq x, y < N)$.

- $SUM$ $x1$ $y1$ $x2$ $y2$ - Find and print the sum of the values in the rectangle from $(x1, y1)$ to $(x2, y2)$, inclusive. You may assume that $x1 \leq x2$ and $y1 \leq y2$, and that the result will fit in a signed $32-bit$ integer.

- $END$ - Indicates the end of the test case.

### Output

For each test case, output one line for the answer to each "SUM" command. Print a blank line after each test case.

#### **Sample Input**

```
1
4
SET 0 0 1
SUM 0 0 3 3
SET 2 2 12
SUM 2 2 2 2
SUM 2 2 3 3
SUM 0 0 2 2
END
```

#### **Sample Output**

```
1
12
12
13
```
