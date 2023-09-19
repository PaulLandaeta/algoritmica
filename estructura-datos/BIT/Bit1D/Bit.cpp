#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int BIT[10000001];
int N;

void update(int posicion, int valor)
{
  for (; posicion <= N; posicion += posicion & -posicion)
  {
    BIT[posicion] += valor;
  }
}

int query(int posicion)
{
  int resultado = 0;
  for (; posicion > 0; posicion -= posicion & -posicion)
  {
    resultado += BIT[posicion];
  }
  return resultado;
}

int completeQuery(int posicionUno, int posicionDos)
{
  return query(posicionDos) - query(posicionUno - 1);
}

int main()
{
  input;
  printf("Tamaño del bit1D (1 <= N <= 10^{7}):\n");
  scanf("%d", &N);
  printf("%d Elementos:\n", N);
  for (size_t i = 1; i <= N; i++)
  {
    int newElement;
    scanf("%d", &newElement);
    update(i, newElement);
  }

  int Q;
  printf("Numero de consultas:\n");
  scanf("%d", &Q);
  printf("%d Consultas:\n", Q);
  while (Q--)
  {
    int posUno, posDos;
    scanf("%d %d", &posUno, &posDos);
    int sumaConsulta = completeQuery(posUno, posDos);
    printf("SUMA EN EL RANGO %d - %d: %d\n", posUno, posDos, sumaConsulta);
  }

  return 0;
}
