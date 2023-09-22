# Binary Search

Al querer realizar búsquedas en un arreglo, es posible que se tenga que evaluar elemento por elemento hasta dar con la respuesta correcta, esto llevaría en el peor de los casos, a que la complejidad algorítmica sea de $O(n) = n$ . Debido a ello, se encontró una forma de optimizar ese proceso cuando se tiene un arreglo ordenado ascendentemente, la Búsqueda Binaria o Binary Search.

### Algoritmo

La forma en que trabaja este algoritmo se basa en establecer una condición inicial llamada $“f”$, la cual retornará valores de verdadero o falso únicamente. Esta función determinará si el elemento es el que se desea encontrar o no. Y la forma en que funciona la búsqueda binaria se da a través del siguiente procedimiento:

Se toma el elemento que se encuentre en la mitad del arreglo de números previamente ordenado.

Se evalúa ese elemento en la función $f$, para ver si cumple con las condiciones del número que se desea buscar. En caso de que, si cumpla, la búsqueda se llevará a cabo desde " $0$ " a " $mitadArreglo-1$ ", considerando de que todo lo que se encuentre a la derecha de la " $mitadArreglo$ " sea verdad. Por el contrario, si la o las condiciones no se cumplen, la nueva búsqueda se llevará a cabo en el rango de " $mitadArreglo+1$ " a " $tamañoArreglo$ ", considerando que todo lo que se encuentre a la izquierda de la " $mitadArreglo$ " será falso.

Repitiendo este proceso iterativa o recursivamente, se llegará a la solución que se desea encontrar, la cual puede ser el último elemento establecido como falso, o el primer elemento establecido como verdadero, esto dependiendo de las condiciones de la función $f$.

La complejidad algorítmica de este proceso es de:

$$ O(n) = log_2(n)$$

Donde $n$: número de elementos del arreglo

### Conclusión

En el caso de que quisiéramos encontrar un elemento en específico dentro de un arreglo de números, o comprobar si este existe, uno podría decir que la búsqueda secuencial podría ser la más eficiente, pero si el arreglo se encontrase ordenado, la búsqueda binaria sería mucho más eficiente y rápida llegado el momento de encontrar el valor que queramos hallar.

### Bibliografía

- Techie Delight. Consultado el: 22-10-2022. Algoritmo de búsqueda binaria: implementación iterativa y recursivo. Obtenido de: https://www.techiedelight.com/es/binary-search/

- Hmong. Consultado el: 22-10-2022. Algoritmo de búsqueda binaria. Obtenido de: https://hmong.es/wiki/Binary_search

- Taboada, A. 2016. 54. Programación en C++ || Búsquedas || Búsqueda Binaria en un arreglo. https://www.youtube.com/watch?v=pxh4QFzDh-Q

- Taboada, A. 2016. 53. Programación en C++ || Búsquedas || Búsqueda Secuencial en un arreglo. https://www.youtube.com/watch?v=_On-0W0-6vQ
