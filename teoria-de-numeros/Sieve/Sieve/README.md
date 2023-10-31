# Sieve

Este programa hecho con C++ (el cual se encuentra en el archivo **Sieve.cpp**) encuentra todos los números primos hasta un valor $N$ especificado.

## Descripción del Algoritmo

La Criba de Eratóstenes es un algoritmo utilizado para encontrar todos los números primos en un rango dado, hasta un número máximo $N$. Funciona de la siguiente manera:

## Instrucciones para Ejecutar el Programa

1. Inicializa un arreglo de booleanos de tamaño $N + 1$ para representar los números del $0$ al $N$. Inicialmente, todos los elementos del arreglo se establecen como verdaderos, lo que indica que todos son potencialmente primos.

2. Comienza desde el primer número primo conocido, que es el número $2$. Marca como falso todos los múltiplos de $2$ en el arreglo, excepto el propio $2$. Esto se hace marcando como falso cada segundo elemento, comenzando desde el $4$.

3. Luego, pasa al siguiente número primo no marcado como falso en el arreglo (en este caso, el $3$) y repite el proceso: marca como falso todos los múltiplos de $3$ en el arreglo, excepto el propio $3$.

4. Continúa este proceso hasta que hayas examinado todos los números del $2$ al $N$. Los números que permanezcan marcados como verdaderos en el arreglo al final del proceso son primos.

## Ejecución del programa

Para ejecutar el programa que utiliza la Criba de Eratóstenes, sigue estos pasos:

### Requisitos

Asegúrate de tener los siguientes requisitos antes de ejecutar el programa:

- Un compilador de C++ (como g++) instalado en tu sistema.
- Un archivo de entrada 'in.txt' que contiene los datos necesarios.

### Datos de Entrada

El programa espera que el archivo **in.txt** contenga los siguientes datos de entrada:

1. Un número $t$, el cual indica el número de caso que tendrá el programa, además de tener un valor mayor a $0$.

2. Una cantidad $t$ de números naturales $N$, que define el límite superior para encontrar números primos. Asegúrate de que $N$ cumple con el siguiente rango: $(2 \leq N \leq 10^7)$.

De esta forma, el programa funcionará correctamente y encontrará los $N$ primos requeridos.
