#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int
using namespace std;
Li n;
Li v[100000001];
Li numero;
queue<Li> respuesta;
bool f(Li k)
{
  // funcion donde se determina si el valor del array
  // cumple o no una condicion
  return v[k] >= numero;
}

Li binarySearch()
{
  Li left = 1;
  Li right = n * 2;
  Li mid = (left + right) / 2;
  // esta condición puede ser cambiada a (left < right)
  // dependiendo del problema
  while (left <= right)
  {
    if (f(mid))
    {
      right = mid - 1;
      // guardamos todos los valores del array que cumplan la condicion
      // de la funcion "f" o se consideran como una solucion
      respuesta.push(v[mid]);
    }
    else
    {
      left = mid + 1;
    }
    mid = (left + right) / 2;
  }
  // Dependiendo del problema, podemos retornar la posicion del primer
  // elemento que cumpla la condicion de la funcion "f", o tambien es
  // posible enviar la posicion del ultimo elemento que no cumpla con
  // la condicion de la funcion "f"
  return mid;
}

int main()
{
  input;
  Li t;
  scanf("%lld", &t);
  while (t--)
  {
    printf("Numero de elementos del Array\n");
    scanf("%lld", &n);
    printf("%lld Elementos:\n", n);
    for (Li i = 1; i <= n; i++)
    {
      scanf("%Lid", &v[i]);
    }
    printf("El numero que se desea encontrar\n");
    scanf("%lld", &numero);
    printf("%lld es el valor que se encontrará en el arreglo:\n", numero);
    binarySearch();
    printf("Respuestas: ");
    while (!respuesta.empty())
    {
      printf("%lld ", respuesta.front());
      respuesta.pop();
    }
    printf("\n\n");
    memset(v, 0, sizeof(v));
  }

  return 0;
}