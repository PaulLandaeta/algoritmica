# Factorial Factors

- El problema se encuentra [aquí](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=825)

### Enunciado (en inglés)

The factorial function, $n!$ $=$ $1$ _ $2$ _ . . . \* $n$, has many interesting properties. In this problem, we want to determine the maximum number of integer terms (excluding 1) that can be used to express $n!$. For example:

$$8! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 = 2 * 3 * 2 * 2 * 5 * 3 * 2 * 7 * 2 * 2 * 2 = 2^7 * 3^2 * 5 * 7$$

By inspection, it is clear that the maximum number of terms (excluding 1) that can be multiplied
together to produce 8! is 11.

### Input

The input for your program consists of a series of test cases on separate lines, ended by end-of-file.
Each line contains one number, $n$, $(2 \leq n \leq 1000000)$.

### Output

For each test case, print the maximum number of factors (excluding 1) that can be multiplied together
to produce $n!$. Put the output from each test case on a separate line, starting in the first column.

### **Sample input**

```
2
10
100
1000
10000
100000
1000000
999999
9999
123487
32227
888888
123121
121312
12121
5657
1231
5
5655
```

### **Sample Output**

```
1
15
239
2877
31985
343614
3626619
3626607
31977
426671
107204
3215736
425376
418966
39033
17699
3581
5
17693
```
