# SubsetSumDP + BitMask

Este código C++ aborda el problema del Subset Sum, una tarea computacional que implica determinar si existe un subconjunto de elementos en un conjunto dado cuya suma sea igual a un valor objetivo. El código utiliza la técnica de programación dinámica mediante el método "Top Down". A continuación, se detallan las funcionalidades y la lógica del programa:

## Introducción al Problema del Subset Sum y Optimización con Programación Dinámica (Top Down)

El problema del Subset Sum es un problema NP-completo que se encuentra en diversas aplicaciones, como la optimización de recursos, la planificación de tareas y la criptografía. En este problema, se busca determinar si es posible seleccionar un subconjunto de elementos de un conjunto dado de tal manera que la suma de esos elementos sea igual a un valor objetivo dado.

La programación dinámica es una técnica utilizada para resolver problemas de optimización y se puede aplicar al Subset Sum. El método "Top Down" consiste en dividir el problema en subproblemas más pequeños y resolverlos de manera recursiva, evitando recalcular soluciones para los mismos subproblemas.

## Estructuras de Datos y Funciones

El código que se encuentra en el archivo "`./SubsetSum_BitMask.cpp`" utiliza varias estructuras de datos y funciones para abordar el problema:

1. **Estructura `DP`**: Esta estructura almacena información relacionada con la programación dinámica. `DP` es una matriz bidimensional con dimensiones `INF`x2000, donde `INF` es una constante definida cuyo valor es `INF = 100001` . Cada celda contiene dos valores, `lessOne` y `bitArray`, que representan el estado de los bits.

2. **Arreglos `numbers` y `valuesNumbersWithMultiples64`**: El arreglo `numbers` almacena los números de entrada proporcionados por el usuario. El arreglo `valuesNumbersWithMultiples64` se utiliza para mantener una relación entre los números y los bits, basandose en los múltiplos de 64, para identificar que bit le corresponde a ese numero.

3. **Funciones de Manipulación de Bits (`encenderBit`, `bitEstaEncendido`, `obtenerPosicionBitMatriz`, etc.)**: Estas funciones ayudan a manipular y consultar bits individuales en números enteros. Se utilizan para establecer y verificar los bits en la matriz `DP`.

4. **Función `subsetSum`**: Esta es la función principal que implementa la programación dinámica "Top Down". Se utiliza para determinar si existe un subconjunto cuya suma sea igual a un valor objetivo. La función realiza llamadas recursivas para explorar diferentes combinaciones de elementos.

## Función Principal `main()`

La función principal interactúa con el usuario y resuelve el problema del Subset Sum:

1. Se define una matriz `DP` para almacenar información relacionada con la programación dinámica. Además, se inicializan otros arreglos y variables necesarios.

2. El usuario ingresa el número de elementos $N$ y los valores $x$ de los elementos en el conjunto. Estos valores deben respetar el siguiente intervalo: $(1 \leq N,x_i \leq 100000)$

3. Se ingresa el valor objetivo `sumToFind`.

4. Se llama a la función `subsetSum` para determinar si existe un subconjunto con la suma igual a `sumToFind`.

5. Se imprime el resultado, indicando si existe un Subset Sum que cumple con el valor objetivo.

## Aplicabilidad de la Programación Dinámica en Subset Sum

La programación dinámica se utiliza para abordar el problema del Subset Sum en diversas aplicaciones, como:

- **Optimización de recursos:** En la asignación óptima de recursos limitados para cumplir con ciertos objetivos.
- **Planificación de tareas:** En la planificación de actividades para maximizar la eficiencia.
- **Criptografía:** En la generación de claves criptográficas y la resolución de problemas criptográficos.

## Conclusión

El código C++ proporciona una solución al problema del Subset Sum utilizando la técnica de programación dinámica "Top Down". Permite determinar si existe un subconjunto cuya suma sea igual a un valor objetivo. La programación dinámica es una técnica poderosa para resolver problemas de optimización, y su aplicación en Subset Sum tiene relevancia en diversas áreas, incluyendo la toma de decisiones y la seguridad de la información.
