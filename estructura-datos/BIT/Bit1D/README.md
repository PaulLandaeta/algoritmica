# BIT de 1 Dimesion

Esta estructura de datos de 1 dimensión, nos proveerá la capacidad de realizar operaciones aritméticas tales como sumar, restar, multiplicar y dividir (dependiendo si la operación se encuentra dentro de los parámetros que establece un Monoide) entre los elementos del Bit.

## Programa

El programa que se encuentra en el archivo **"Bit.cpp"** recibe como parámetros lo siguiente:

- Un número natural $N$, el cual debe encontrarse en el rango de: ($1 \leq N \leq 10^{7}$). Este número define el tamaño del arreglo de números que se utilizarán para construir el Bit.

- Luego de ello, le sigue una cantidad de $N$ números entero, los cuales pueden encontrarse dentro del siguiente rango: ($ -10^{9} \leq númeroEntero \leq 10^{9}$)

- Al terminar de agregar nuestros $N$ elementos, debemos agregar un número natural $Q$, el cual representa la cantidad de consultas que se desean realizar en el Bit (este debe ser siempre mayor a 0).

- Finalmente, debemos agregar $Q$ veces dos números naturales, para definir de una $posA$ a una $posB$ del Bit queremos obtener una suma, resta, etc, de todos los elementos que se encuentren dentro de ese rango. El valor de ambas posiciones debe respetar el siguiente intervalo: $(1 \leq posA \leq posB \leq N)$

Con estos parámetros, tendremos la capacidad de ejecutar correctamente el programa con la implementación del Bit1D.
