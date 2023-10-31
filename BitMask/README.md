# Máscara de Bits

## Introducción a las Máscaras de Bits en C++

En el contexto de la algoritmica y la programación competitiva, una "máscara de bits" se refiere a una técnica que se utiliza para representar o enumerar subconjuntos de elementos de un conjunto dado mediante números binarios. Esta técnica es especialmente útil para resolver problemas relacionados con la generación y manipulación de subconjuntos, como el problema del "Subset Sum", la generación de todas las posibles combinaciones de elementos, y otros problemas similares.

Aquí hay una explicación completa de lo que es una máscara de bits en el mundo de la algoritmia:

1. **Representación Binaria**: En una máscara de bits, cada bit en un número binario representa un elemento en un conjunto. Un bit encendido (1) indica que el elemento correspondiente está presente en el subconjunto, mientras que un bit apagado (0) indica que el elemento no está presente. Por lo tanto, una máscara de bits se utiliza para representar la presencia o ausencia de elementos en un subconjunto.

2. **Enumeración de Subconjuntos**: La representación binaria de una máscara de bits se presta para la enumeración eficiente de todos los subconjuntos posibles de un conjunto. Dado un conjunto de n elementos, se pueden generar todas las 2^n máscaras de bits diferentes, donde cada máscara representa un subconjunto distinto. Esto es útil para problemas que involucran la búsqueda exhaustiva de subconjuntos.

3. **Operaciones Lógicas**: Las máscaras de bits permiten realizar operaciones lógicas como la intersección, la unión y la diferencia de subconjuntos de manera eficiente. Esto es útil cuando se necesita combinar o comparar subconjuntos de elementos de diferentes conjuntos.

4. **Iteración sobre Subconjuntos**: En muchos algoritmos, se utiliza una máscara de bits para iterar sobre todos los subconjuntos de un conjunto dado. Para cada máscara, se realiza alguna acción basada en los elementos presentes en el subconjunto representado por esa máscara.

5. **Optimización de Algoritmos**: Las máscaras de bits se utilizan para optimizar algoritmos al evitar cálculos innecesarios. Por ejemplo, en el problema del "Subset Sum", se puede utilizar una máscara de bits para recordar los subconjuntos cuya suma ya se ha calculado, evitando recálculos innecesarios.

6. **Problemas Relacionados**: Las máscaras de bits son esenciales en la resolución de problemas como la generación de todas las combinaciones posibles, la búsqueda exhaustiva de soluciones en problemas de optimización combinatoria, la búsqueda de caminos en grafos, y la resolución de problemas de programación dinámica con subestructura óptima.

En resumen, una máscara de bits es una técnica poderosa y versátil en el mundo de la algoritmia que permite representar, enumerar y manipular subconjuntos de elementos de manera eficiente. Esta técnica es fundamental para resolver una amplia variedad de problemas algorítmicos y es ampliamente utilizada en competencias de programación y en la optimización de algoritmos.

## Funciones de Manipulación de Bits

El código desarrollado en C++ (el cual se encuentra en el directorio de ./BitMaskSample/bitMask.cpp), proporciona tres funciones para la manipulación de bits, con el fin de ejemplificar como se pueden manipular los bits correctamente (cabe aclarar que el tipo de dato $LLi$ es realmente el tipo de dato $long$ $long$ $int$):

### 1. `LLi encenderBit(LLi numero, LLi posicion)`

Esta función enciende (pone a 1) el bit en la posición especificada de un número entero `numero`. Calcula una máscara para el bit deseado y realiza una operación OR para establecer ese bit en 1.

```
Encender el bit de la posicion 2:
1 0 1 0
0 1 0 0 OR
-------
1 1 1 0
```

### 2. `LLi apagarBit(LLi numero, LLi posicion)`

Esta función apaga (pone a 0) el bit en la posición especificada de un número entero `numero`. Al igual que la función anterior, calcula una máscara, pero luego invierte esa máscara y realiza una operación AND para apagar el bit en la posición indicada.

```
Apagar el bit de la posicion 2:
1 1 1 0
1 0 1 1 AND
-------
1 0 1 0
```

### 3. `LLi bitEstaEncendido(LLi numero, LLi posicion)`

Esta función verifica si el bit en la posición especificada de un número entero `numero` está encendido (1) o apagado (0). Utiliza una máscara para aislar el bit deseado y realiza una operación AND para comprobar su estado.

```
¿Está encendido el bit de la posicion 2?

return ((1 0 1 0) AND (0 1 0 0)) != 0
```

## Función Principal `main()`

El programa principal interactúa con el usuario y utiliza las funciones de manipulación de bits de la siguiente manera:

1. Se define una matriz bidimensional `matriz[128][64]` que se utiliza para almacenar información de bits.

2. Se crea un conjunto `numeros` de pares `(LLi, LLi)` para establecer una relación entre los bits y su posición en la matriz.

3. El usuario ingresa dos números `posicionX` y `posicionY` que representan una posición en la matriz. Cabe mencionar que los números deben respetar los siguientes intervalos: $(0 \leq posicionX \leq 127)$, $(1 \leq posicionY \leq 4096)$

4. Se obtiene la relación de bit correspondiente de acuerdo con `posicionY` y se calcula la posición del bit en esa relación.

5. Se solicita al usuario que ingrese una operación ($ON$ o $OFF$) y se almacena en la variable `operacion`.

6. Dependiendo de la operación ingresada, se activa o desactiva el bit en la matriz utilizando las funciones de manipulación de bits. Se imprime un mensaje indicando si se está activando o desactivando el bit. Esta operación se da gracias a que se obtiene la posición del bit deseado con la siguiente operación:

```C++
// 1. Obtenemos la `posicionY`` que digitamos antes y que guardamos en `numeroUno`.
// 2. Obtenemos la posicion de la casilla de bits donde deberia encontrarse esta `positionY`.
// 3. Le restamos a la `posicionY` la diferencia entre el valor `parejaMatriz.first`(el cual es un multiplo de 64, y el cual hace referencia al rango de bits en el que se encuentra la `posicionY`) y el numero 64.
// 4. Finalmente le restamos al numero 64 el resultado total de la operacion anterior.
LLi positionDelBit = 64 - (numeroUno.second - (parejaMatriz.first - 64));
```

7. Finalmente, se muestra el estado actual del bit después de realizar la operación.

## Aplicabilidad de las Máscaras de Bits

Las máscaras de bits se utilizan en diversas aplicaciones, incluyendo:

- **Manipulación de registros de hardware:** Para configurar o leer valores específicos en registros de hardware.
- **Compresión de datos:** Para representar datos de manera más eficiente utilizando menos espacio.
- **Cifrado y seguridad:** Para aplicar operaciones criptográficas o verificar permisos.
- **Manipulación de conjuntos de elementos:** Para representar un conjunto de elementos mediante bits individuales (cada elemento corresponde a un bit).

## Conclusión

Este código C++ ejemplifica el uso de máscaras de bits para manipular bits en una matriz. Las funciones `encenderBit`, `apagarBit` y `bitEstaEncendido` permiten encender, apagar y verificar el estado de bits en una posición específica. Las máscaras de bits son útiles en una variedad de aplicaciones donde la manipulación de bits es esencial.
