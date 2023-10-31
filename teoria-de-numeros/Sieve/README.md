# Algoritmo de la Criba de Eratóstenes

El algoritmo de la Criba de Eratóstenes, es una técnica eficiente para encontrar todos los números primos hasta un cierto límite. Esto se debe, a que implementaciones ineficientes pueden llegar a tener una complejidad innecesariamente alta como lo es $O(N^2)$.

## Introducción

La Criba de Eratóstenes es un algoritmo antiguo y eficiente utilizado para encontrar todos los números primos hasta un número dado $N$. Es una herramienta fundamental en teoría de números y tiene una complejidad algorítmica de **$O(\sqrt{N})$**, lo que lo hace adecuado para grandes conjuntos de datos.

## Algoritmo

El algoritmo funciona de la siguiente manera:

1. Inicializa una lista de números del 2 al $N$, asumiendo que todos son primos inicialmente.

2. Comienza con el primer número en la lista, que es el número primo $2$.

3. Tacha todos los múltiplos de $2$ en la lista, excepto $2$ mismo.

4. Encuentra el siguiente número no tachado en la lista, que es $3$, y lo declara como un número primo.

5. Tacha todos los múltiplos de $3$ en la lista, excepto $3$ mismo.

6. Repite los pasos **$4$** y **$5$** hasta que hayas examinado todos los números hasta $N$.

7. Todos los números no tachados en la lista son números primos.

## Ejemplo de Implementación en Python

Aquí hay una implementación simple en Python del algoritmo de la Criba de Eratóstenes:

```python
def sieve_of_eratosthenes(n):
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False
    p = 2
    while p * p <= n:
        if is_prime[p]:
            for i in range(p * p, n + 1, p):
                is_prime[i] = False
        p += 1
    primes = [p for p in range(2, n + 1) if is_prime[p]]
    return primes

n = 30  # Cambia esto al número hasta el cual deseas encontrar primos.
print(sieve_of_eratosthenes(n))

```

## Conclusión

Es posible decir que esta algoritmo, incrementa mucho la eficiencia de un programa que necesita manejar números primos para sus procedimientos. De igual manera, este algoritmo puede ayudar a resolver otros problemas como encontrar la suma de los $N$ primos.
