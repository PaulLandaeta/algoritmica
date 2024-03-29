# DarkRoads

- El problema se encuentra [aquí](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2678)

### Enunciado (en inglés)

Economic times these days are tough, even in Byteland. To reduce the operating costs, the government
of Byteland has decided to optimize the road lighting. Till now every road was illuminated all night
long, which costs 1 Bytelandian Dollar per meter and day. To save money, they decided to no longer
illuminate every road, but to switch off the road lighting of some streets. To make sure that the
inhabitants of Byteland still feel safe, they want to optimize the lighting in such a way, that after
darkening some streets at night, there will still be at least one illuminated path from every junction in
Byteland to every other junction.
What is the maximum daily amount of money the government of Byteland can save, without making
their inhabitants feel unsafe?

### Input

The input file contains several test cases. Each test case starts with two numbers $m$ and $n$, the number of junctions in Byteland and the number of roads in Byteland, respectively. Input is terminated by $m$ $=$ $n$ $=$ $0$. Otherwise, $(1 ≤ m ≤ 200000)$ and $(m − 1 ≤ n ≤ 200000)$. Then follow $n$ integer triples $x$, $y$, $z$ specifying that there will be a bidirectional road between $x$ and $y$ with length $z$ meters $(0 \leq x, y < m)$ and $(x != y)$. The graph specified by each test case is connected. The total length of all roads in each
test case is less than $2^{31}$.

### Output

For each test case print one line containing the maximum daily amount the government can save.

### **Sample Input**

```
7 11
0 1 7
0 3 5
1 2 8
1 3 9
1 4 7
2 4 5
3 4 15
3 5 6
4 5 8
4 6 9
5 6 11
0 0
```

### **Sample Output**

```
51
```
