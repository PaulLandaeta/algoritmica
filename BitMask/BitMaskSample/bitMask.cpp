#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
using namespace std;
typedef long long int LLi;

LLi encenderBit(LLi numero, LLi posicion)
{
  LLi mascara = 1 << posicion;
  return numero | mascara;
}

LLi apagarBit(LLi numero, LLi posicion)
{
  LLi mascara = 1 << posicion;
  mascara = ~mascara;
  return numero & mascara;
}

LLi bitEstaEncendido(LLi numero, LLi posicion)
{
  LLi mascara = 1 << posicion;
  return (numero & mascara) != 0;
}

int main()
{
  input;
  set<pair<LLi, LLi>> numeros;
  LLi matriz[128][64];

  for (LLi i = 1; i <= 64; i++)
  {
    numeros.insert(make_pair(64 * i, i - 1));
  }
  LLi posicionX, posicionY;
  printf("Escriba una posicionX y una posicionY:\n");
  scanf("%lld %lld", &posicionX, &posicionY);

  pair<LLi, LLi> numeroUno = make_pair(posicionX, posicionY);

  char operacion[3];
  printf("Escriba la operacion que desea hacer:\n");
  scanf("%s", operacion);

  pair<LLi, LLi> parejaMatriz = *numeros.lower_bound(make_pair(numeroUno.second, 0));
  LLi bitPosition = 64 - (numeroUno.second - (parejaMatriz.first - 64));
  printf("Estado actual del bit: %lld\n", bitEstaEncendido(matriz[numeroUno.first][parejaMatriz.second], 62));
  printf("Operando...\n");
  // palabra clave: ON
  if (operacion[1] == 'N')
  {
    printf("Activando Bit...\n");
    matriz[numeroUno.first][parejaMatriz.second] = encenderBit(matriz[numeroUno.first][parejaMatriz.second], bitPosition);
  }
  // palabra clave: OFF
  else
  {
    printf("Desactivando Bit...\n");
    matriz[numeroUno.first][parejaMatriz.second] = apagarBit(matriz[numeroUno.first][parejaMatriz.second], bitPosition);
  }
  printf("Estado actual del bit: %lld\n", bitEstaEncendido(matriz[numeroUno.first][parejaMatriz.second], bitPosition));
  return 0;
}