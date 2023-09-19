# BIT de 2 Dimesiones

Esta estructura de datos de 2 dimensión, nos proveerá la capacidad de realizar operaciones aritméticas tales como sumar, restar, multiplicar y dividir (dependiendo si la operación se encuentra dentro de los parámetros que establece un Monoide) entre los elementos de una matriz, y que además tanto la actualización de un elemento, como de una consulta de una operación en un rango determinado (submatriz) en tiempo: $log(N*M)$, donde $N$ y $M$ son las dimensiones de nuestra matriz, y por lo tanto las dimensiones de nuestro Bit2D.

- $N$ el número de Filas
- $M$ el número de Columnas

## Programa

El programa que se encuentra en el archivo **"Bit2D.cpp"** recibe como parámetros lo siguiente:

- Dos números naturales $N$ y $M$, los cuales deben encontrarse en el siguiente intervalo: ($1 \leq N,M \leq 2*10^{4}$). Estos números definirán el tamaño de nuestro Bit2D.

- Luego de ello, le sigue una cantidad de $N * M$ números entero, los cuales pueden encontrarse dentro del siguiente intervalo: ($ -10^{9} \leq númeroEntero \leq 10^{9}$)

- Al terminar de agregar nuestros $N * M$ elementos, debemos agregar un número natural $Q$, el cual representa la cantidad de consultas que se desean realizar en el Bit (este debe ser siempre mayor a 0).

- Finalmente, debemos agregar $Q$ veces 4 números naturales. El primer par de números, ayudarán a definir desde que punto $(x1,y1)$ se desea formar la submatriz de consulta. Y el segundo par de números, ayudaran a definir hasta que punto $(x2,y2)$ se construirá nuestra submatriz de consulta. El valor de estos números naturales, deben encontrarse dentro del sisguiente intervalo:
  $$(1 \leq x1 \leq x2 \leq N ) AND (1 \leq y1 \leq y2 \leq M )$$

Con estos parámetros, tendremos la capacidad de ejecutar correctamente el programa con la implementación del Bit2D.

## Bibliografía

- [Explicación de la implementación y lógica del Bit2D más detallada aquí](https://www.youtube.com/watch?v=nFbfTiUQkOY)
