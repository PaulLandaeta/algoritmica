# Kruskal

En la teoría de grafos, podemos encontrarnos con diferentes formas en las que un árbol de expansión puede ser representado. Estos árboles de expansión son las formas en las que todos los nodos del grafo estarán conectados entre sí, y por supuesto, entre ellos existen árboles de expansión máximo y árboles de expansión mínimo. Y precisamente, el algoritmo de Kruskal será el que ayude a encontrar un árbol de expansión mínimo que pueda existir dentro del grafo.

### Algoritmo

La forma en la que funciona este algoritmo puede representarse a través de los siguientes pasos:

- Se ordena todas las aristas del grafo, a través del peso que tengan sus aristas, teniendo un ordenamiento ascendente.

- Se deben agregar las aristas que vayamos encontrando, mientras estas logren conectarse con los nodos que aún no hayan sido agregados, pero en caso de que encontremos aristas que conecten a nodos que ya habían sido agregados, debemos descartar dicha arista. Considerando estas condiciones, la manera en la que se sabrá si los nodos ya se encuentran agregados o no, será a través de una estructura de datos llamada Union-Find. La forma en la que trabaja esta estructura de datos se basa en que un conjunto de nodos, pueden estar conectados entre sí a través de un nodo padre. Y como se había ordenado con anterioridad las aristas por sus pesos, el Union-Find siempre agregará las aristas con menor peso desde un inicio.

El 2 paso debe repetirse hasta haber analizado todas las aristas del grafo.

La complejidad algorítmica de este proceso dependerá del tipo de algoritmo de ordenamiento que se aplique para ordenar las aristas ascendentemente. Y considerando a algoritmos como el Merge Sort o el Quick Sort, la complejidad algorítmica del algoritmo Krusal será de:

$$ O(n) = m\*log(m) $$

- Donde $m$ es el número de aristas que se encuentran en el grafo.

### Uso

Los usos que se le pueden llegar a dar a este algoritmo pueden darse en situaciones como la siguiente:

Si se requiere distribuir gas de forma eficiente en una zona de una ciudad en específico, y se desea utilizar la menor cantidad de metros de tubo posible, utilizaríamos Kruskal para hallar las conexiones que debería tener el sistema de gas para lograr su distribución en toda la zona de forma eficiente.

### Conclusión

Como se pudo observar, el algoritmo Kruskal ayuda a mantener todas las partes de un sistema conectadas entre sí con el menor peso posible, dependiendo de lo que se esté considerando como peso dentro del sistema. Y si se desea hallar una solución parecida a la que se mencionó en el ejemplo, Kruskal definitivamente sería una opción fiable.

### Bibliografía

- Geeks for Geeks. Actualizado el: 16-10-2022. Algoritmo de árbol de expansión mínimo de Kruskal | Codicioso Algo-2. Obtenido de: https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/

- Rojas, A. 2014. algoritmo de kruskal y aplicacion en la vida real (parte 1). https://www.youtube.com/watch?v=Pgn5PcGK6xo
