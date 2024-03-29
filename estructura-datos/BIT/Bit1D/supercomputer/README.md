# Super Computer (Kattis - supercomputer)

- El problema se encuentra [aquí](https://open.kattis.com/problems/supercomputer)

### Enunciado (en inglés)

Jóhann, Marteinn and Símon have decided to make the next generation of supercomputers! They know that it probably won’t be long before Quantum computers take over, but since they don’t know anything about Quantum mechanics, they want to rush these new supercomputers out into the market, make their money, and hopefully retire with their wealth.

Since they’re trying to sell these things, they decide they need some cool features to promote the computers. Marteinn suggests painting flames on the back of the computers to make it look like they’re computing faster. Jóhann agrees, but suggests also adding a second keyboard so people can type faster, just like in that TV show: NCIS. Símon also agrees, but he thinks there’s something missing. What are they forgetting? Ah, of course, faster memory!

They decide to add an $N-bit$ memory that supports the following two operations:

- given an integer $k$
  , flip the $k$
  :th bit of the memory (changing a $0$ to a $1$, and a $1$
  to a $0$), and

- given integers $l$ and $r$, count how many bits between the $l:th$ bit and the $r:th$ bit are set to $1$.

After announcing their new supercomputer with these three awesome features, they immediately received a large amount of orders. Of course everyone wants a supercomputer with flames painted on the back! But now it’s time to actually implement these features. While Jóhann, Marteinn and Símon are busy painting the computers and supplying more keyboards, they’ve hired you to implement their memory.

### Input

The input consists of:

- one line containing two integers $N$ $(1 \leq N \leq 10^{6})$, the number of bits in the memory, and $K$ $(1 \leq K \leq 10^{5})$, the number of queries;

- $K$ lines each of the form:

  - F $i$ $(1 \leq i \leq N)$ representing a query to flip the $i:th$ bit in memory;

  - C $l$ $r$ $(1 \leq l \leq r \leq N)$ representing a query to count the number of $1$
    bits in the range from
    to
    , inclusive.

All $N$ bits in the memory are initially set to $0$.

### Output

For each query of the second type, output a single line containing the number of bits set to $1$ in the given range.

#### **Sample Input**

```
6 7
F 3
C 2 5
F 3
F 4
F 5
C 2 5
C 1 4
```

#### **Sample Output**

```
1
2
1
```
