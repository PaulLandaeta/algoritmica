#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int
using namespace std;

Li BIT[10000001];
Li N;

Li query(Li posicion)
{
  Li resultado = 0;
  for (; posicion > 0; posicion -= (posicion & -posicion))
  {
    resultado += BIT[posicion];
  }
  return resultado;
}

Li completeQuery(Li posicionUno, Li posicionDos)
{
  return query(posicionDos) - query(posicionUno - 1);
}

void update(Li posicion, Li valor)
{
  for (; posicion <= N; posicion += (posicion & -posicion))
  {
    BIT[posicion] += valor;
  }
}

void completeUpdate(Li posicion, Li valor)
{
  Li newValue = valor - completeQuery(posicion, posicion);
  update(posicion, newValue);
}

int main()
{
  input;
  printf("Tamaño del bit1D (1 <= N <= 10^{7}):\n");
  scanf("%lld", &N);
  printf("%lld Elementos:\n", N);
  for (Li i = 1; i <= N; i++)
  {
    Li newElement;
    scanf("%lld", &newElement);
    update(i, newElement);
  }

  Li Q;
  printf("Numero de consultas:\n");
  scanf("%lld", &Q);
  printf("%lld Consultas:\n", Q);
  while (Q--)
  {
    char operationType[1];
    Li posUno, posDos;
    scanf("%s", operationType);
    scanf("%lld %lld", &posUno, &posDos);
    if (operationType[0] == 'Q')
    {
      Li sumaConsulta = completeQuery(posUno, posDos);
      printf("SUMA EN EL RANGO (%lld - %lld): %lld\n", posUno, posDos, sumaConsulta);
    }
    else
    {
      completeUpdate(posUno, posDos);
      printf("ACTUALIZACION: posicion(%lld) - nuevoValor(%lld)\n", posUno, posDos);
    }
  }
}
