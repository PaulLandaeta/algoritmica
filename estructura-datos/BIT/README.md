# Binary Indexed Tree

Si quisieramos evitar crear un Segment-Tree que casi duplicara el número de elementos que tuvieramos en una lista, pero sin perder la ventaja de hallar con una gran velocidad y eficiencia el resultado de una o más operaciones entre varios elementos, podemos recurrir al Binary-Indexed-Tree (o tambien conocido por sus siglas BIT).

## Algoritmo

### Inicialización

En algunas implementaciones puede que no haya un proceso directo de construcción del BIT, ya que inicialmente se encuentra lleno del valor 0, por lo que el proceso de construir el BIT realmente consiste en actualizar esos valores por unos nuevos, tomando en cuenta los valores de la lista de números que queramos agregar en él. La forma en que se actualiza en BIT es a través de la posición que queramos modificar, la cual percutirá a través del resto del BIT por medio de un incremento orientado a $2^n$, es decir, que la posición pasará a pertenecer al grupo numérico ya mencionado. Esto último lo hará hasta llegar al número de elementos totales que se desea agregar dentro del BIT.

Esto nos da a entender que la complejidad para agregar elementos dentro del BIT será de:

$$O(n) = n*log(n)$$

Donde **'n'** = cantidad de elementos a agregar

Sin embargo, considerando que la inicialización se basa en la actualización de elementos dentro del BIT, podemos considerar que la complejidad algoritmica para actualizar (y consultar un rango determinado) un elemento dentro del BIT será de:

$$O(n) = log(n)$$

Donde **'n'** = cantidad de elementos del arreglo, el cual será el límite del Método iterativo

### Localización

Llegado el momento de obtener el resultado de una determinada posición del BIT en relación a los elementos del arreglo, es a través de un proceso similar al de la actualización de elementos dentro del BIT, solo que se dará de forma regresiva, desde la posición que deseamos evaluar hasta la inicial.

Y al tener la complejidad algoritmica para actualizar un elemento dentro del BIT, la misma complejidad se aplica para la localización del resultado deseado, es decir:

$$O(n) = log(n)$$

Donde **'n'** = cantidad de elementos del arreglo, el cual será el límite del Método iterativo

## Conclusión

Si deseamos obtener el resultado de una operación básica como la suma dentro de un arreglo, sin necesidad de tener que recorrerlo $n$ veces para Conseguirlo en cada llamado del programa, se debería considerar en darle el uso al BIT o Binary-Indexed-Tree.

## Bibliografía

- https://www.geeksforgeeks.org/binary-indexed-tree-or-fenwick-tree-2/
