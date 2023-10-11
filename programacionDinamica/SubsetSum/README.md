# Subset-Sum DP

En algunos problemas de la informática, podemos encontrarnos con el problema del Subset-Sum. Este problema consta en saber si tenemos la posibilidad de formar un numero sumando uno o más elementos dentro de un arreglo de números naturales. Y a pesar de que hay formas de resolverlo utilizando recursividad, esto podría provocar que nuestro algoritmo se vuelva ineficiente con arreglo de números muy extensos. Afortunadamente, la programación dinámica brinda una optimización a este problema.

### Algoritmo

La idea que utiliza este algoritmo con la programación dinámica se aplica a través del Top Down (Cabe mencionar que podemos utilizar el concepto de Bottom Up), es decir, que el problema con cada llamado recursivo se hará más simple. En otras palabras, se generan problemas pequeños que conformarían un camino a la solución que se desea encontrar, y en caso de que algunos resultados no llegasen a ser correctos, se los omitirían. Esto se logra a través de la búsqueda dentro del arreglo, el cual, con ayuda de un puntero, se buscará la respuesta a la suma, y dependiendo de si se cumple una condición o no, el tamaño del problema se irá dividiendo poco a poco en problemas más pequeños. Y las condiciones que sigue el algoritmo para hacer ese llamado recursivo y verificar sobre cómo se debe simplificar el problema son las siguientes son las siguientes:

- Caso 1: Se debe considerar un caso base para salir del llamado recursivo, en este caso preguntamos si es que la suma requerida es igual a 0, en caso de ser así, podemos decir que la respuesta es verdadera.

- Caso 2: En caso de que la suma sea menor a 0, podemos considerarla como una respuesta falsa.

- Caso 3: Si el puntero utilizado para recorrer el arreglo es menor a 0, quiere decir que ya no nos encontramos dentro del arreglo, y por lo tanto podemos considerar esa respuesta falsa.

- Caso 4: En caso de que el número a buscar sea menor al número que señala el puntero, se debe hacer un nuevo llamado recursivo, el cual hará que el número el cual el puntero originalmente estaba apuntando cambie.

- Caso 5: En caso de que no se llegasen a cumplir ninguno de los otros casos, se debe realizar dos llamados recursivos: uno cambiará el puntero y el valor de la suma que se busca por la diferencia entre esa suma y el número al cual apunta el puntero, en cambio el otro tan solo cambiará el puntero. Ambos se encontrarán unidos por medio de un operador OR, y de esta forma se obtendría al menos una respuesta verdadera.

Si repetimos este proceso hasta llegar a uno de los casos bases ya planteados, se obtendrá la respuesta booleana de ver si se puede formar o no una suma con los elementos de un arreglo.

La complejidad algorítmica de este proceso consta de:

$$ O(n) = sum \* n $$

Donde $sum$: suma a buscar

Donde $n$: Cantidad de elementos en el arreglo

### Uso

En las posibles implementaciones de este algoritmo, podríamos encontrarnos con lo siguiente:

- Si quisiéramos encontrar un subconjunto del original, el cual logre formar la suma que se ingresó en el problema, podemos encontrar dichos elementos que conformen a ese subconjunto en un tiempo polinomial o menor.

### Conclusión

Si quisiéramos simplificar en cierta forma el Subset-Sum Problem con casos específicos, con el fin de generar de forma eficiente subconjuntos de un conjunto en base a la suma de ciertos elementos del mismo, la utilización de la Programación Dinámica junto con el concepto de Top Down para lograrlo.

### Ejercicio

- [C. Subset Sums](https://codeforces.com/problemset/problem/348/C)

### Bibliografía

- CS Dojo. 2018. Dynamic Programming Interview Question #1 – Find Sets Of Numbers That Add Up to 16. https://www.youtube.com/watch?v=nqlNzOcnCfs

- Geeks for Geeks. Actualizado el: 21-06-2022. Problema de suma de subconjuntos | DP - 25. Obtenido de: https://hmong.es/wiki/Prim%27s_algorithm

- Udacity. 2015. Subset Sum - Georgia Tech - Computability, Complexity, Theory: Complexity. https://www.youtube.com/watch?v=u3w5Ig58TN0
