#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
using namespace std;

int BIT[10000001];
int sizeVector; // maximo 10000000

void update(int posicion, int valor)
{
  for (; posicion <= sizeVector; posicion += posicion & -posicion)
  {
    if (valor == 1)
    {
      BIT[posicion] += 1;
    }
    else
    {
      BIT[posicion] -= 1;
    }
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

int main()
{
  input;

  int N;
  scanf("%d", &N);
  sizeVector = N + 1;

  memset(BIT, 0, sizeVector);

  int K;
  scanf("%d", &K);

  int valor[sizeVector];
  memset(valor, 0, sizeof(valor));

  while (K--)
  {
    char letra;
    cin >> letra;

    if (letra == 'F')
    {
      int bit;
      scanf("%d", &bit);
      if (valor[bit] == 0)
      {
        update(bit, 1);
        valor[bit] = 1;
      }
      else
      {
        update(bit, 0);
        valor[bit] = 0;
      }
    }
    else
    {
      int rango1 = 0, rango2 = 0;
      scanf("%d", &rango1);
      scanf("%d", &rango2);
      if (rango2 == rango1)
      {
        if (valor[rango1] == 1)
        {
          printf("%d\n", 1);
        }
        else
        {
          printf("%d\n", 0);
        }
      }
      else if (rango1 == 1)
      {
        printf("%d\n", query(rango2));
      }
      else if (valor[rango1] == 1)
      {
        int cantidadBits = query(rango2) - query(rango1) + 1;
        printf("%d\n", cantidadBits);
      }
      else
      {
        int cantidadBits = query(rango2) - query(rango1);
        printf("%d\n", cantidadBits);
      }
    }
  }

  return 0;
}
