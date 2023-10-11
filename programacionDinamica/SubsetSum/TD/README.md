# DP para resolver el SubsetSum

Ahora se presentará una implementación en C++ del problema del SubsetSum usando DP con ciertas limitantes, para decidir si dada una lista de números, es posible formar una sublista, cuya suma de todos sus elementos es igual a una Suma dada. Para ello, se analizará la entrada de datos que debe recibir:

# Programa

Este programa recibe como parámetros lo siguiente:

- El programa recibe un número natural $N$, el cual determinará la cantidad de elementos de la **Lista Inicial**. Este número debe de encontrarse en el siguiente intervalo: $(1 \leq N \leq 100)$

- Luego, el programa recibe una lista de $N$ números naturales $X$, los cuales conformarán la **Lista Inicial**. Estos números deben encontrarse dentro del siguiente intervalo: $(0 \leq X \leq 10^{6})$

- Finalmente se recibe un número natural $SUM$, el cual representará la suma que podrá ser formada o no por una **Sublista**, la cual nace de la **Lista Inicial**. Este número debe encontrarse dentro del siguiente intervalo: $(1 \leq SUM \leq 10^{6})$

De esta forma, es posible introducir de manera correcta los datos que requiere el programa que se encuentra en el archivo **"SubsetSumDP.cpp"** para que pueda ser ejecutado correctamente.
