# Algoritmo de Kruskal

Ahora se presentará una implementación en C++ del algoritmo de Kruskal, para hallar el MST (árbol de expansión mínimo). Para ello, se analizará la entrada de datos que debe recibir:

## Programa

Este programa recibe como parámetros lo siguiente:

- Un número natural $t$, el cual indica el número de casos que se desea evaluar. El número debe de encontrarse dentro del siguiente intervalo: $(1 \leq t \leq 10^{18})$ (esto es posible gracias a que el tipo de dato que usa la variable $t$ es **long long int**). Esto da a entender que recibirá los datos requeridos para realizar un solo caso de uso $t$ veces.

- Luego, el programa recibe 2 números naturales: $N$ y $M$. El primer número, representa al número de nodos que componen al grafo. Y el segundo número, representa el número de aristas que conectan a todos los nodos del grafo. Ambos números deben encontrarse dentro del siguiente intervalo: $(1 \leq N, M \leq 10^{7})$ donde $(N - 1 \leq M)$.

- Una vez establecido el número de nodos y de aristas del grafo, el programa debe recibir $M$ lineas de datos numéricos. Cada linea contiene 3 números, los cuales representan lo siguiente:

  - El primer número representa el nodo destino, del cual nacerá la arista. Cabe mencionar que los nodos se los representará por posiciones, las cuales van desde $0$ a $N-1$. Esto quiere decir que si establecimos que el grafo tenga 3 nodos, la forma de acceder a ellos será usando los valores $0$, $1$ y $2$, los cualesrepresentarían a los nodos $1$, $2$ y $3$.

  - El segundo número representa el nodo con el que se encuentra conectado el primer nodo. De igual manera, este debe ser referenciado con la misma lógica previamente mencionada (si queremos acceder al nodo $2$, debemos usar el valor $1$ para lograrlo).

  **Nota:** Ambos valores, deben encontrarse dentro del siguiente intervalo: $(0 \leq primerNodo,segundoNodo \leq N-1)$, donde $(primerNodo != segundoNodo)$

  - Finalmente, se trendrá que insertar un número natural, el cual establecerá el peso de la arista que se encuentra conectando a los 2 nodos previamente definidos anteriormente. El intervalo en el que debe encontrarse el peso debe ser: $(1 \leq pesoArista \leq 10^{18})$ (esto es posible gracias a que el tipo de dato que usa la variable $pesoArista$ es **long long int**).

De esta forma, es posible introducir de manera correcta los datos que requiere el programa que se encuentra en el archivo **"Kruskal.cpp"**
