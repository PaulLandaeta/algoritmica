#include <bits/stdc++.h>
using namespace std;
typedef long long int LLi;
#define input freopen("in.txt", "r", stdin)
#define INF 100001
struct
{
  LLi lessOne;
  LLi bitArray;
} DP[INF][2000];

LLi numbers[INF];
pair<LLi, LLi> valuesNumbersWithMultiples64[INF];

LLi N = 0, Sum = 0;

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

LLi obtenerPosicionBitMatriz(LLi i, LLi j)
{
  LLi numeroBase64 = valuesNumbersWithMultiples64[j].first;
  return 64 - (j - (numeroBase64 - 64));
}

LLi lessOneBitEncendido(LLi i, LLi j)
{
  LLi posicionArray = valuesNumbersWithMultiples64[j].second;
  return bitEstaEncendido(DP[i][posicionArray].lessOne, obtenerPosicionBitMatriz(i, j));
}

LLi bitArrayEncendido(LLi i, LLi j)
{
  LLi posicionArray = valuesNumbersWithMultiples64[j].second;
  return bitEstaEncendido(DP[i][posicionArray].bitArray, obtenerPosicionBitMatriz(i, j));
}

void cambiarValorBitLessOne(LLi i, LLi j, LLi encender)
{
  LLi posicionArray = valuesNumbersWithMultiples64[j].second;
  if (encender)
  {
    DP[i][posicionArray].lessOne = encenderBit(DP[i][posicionArray].lessOne, obtenerPosicionBitMatriz(i, j));
  }
  else
  {
    DP[i][posicionArray].lessOne = apagarBit(DP[i][posicionArray].lessOne, obtenerPosicionBitMatriz(i, j));
  }
}

void cambiarValorBitBitArray(LLi i, LLi j, LLi encender)
{
  LLi posicionArray = valuesNumbersWithMultiples64[j].second;
  if (encender)
  {
    DP[i][posicionArray].bitArray = encenderBit(DP[i][posicionArray].bitArray, obtenerPosicionBitMatriz(i, j));
  }
  else
  {
    DP[i][posicionArray].bitArray = apagarBit(DP[i][posicionArray].bitArray, obtenerPosicionBitMatriz(i, j));
  }
}

LLi subsetSum(LLi sum, LLi index, LLi size)
{
  if (index > size)
  {
    if (sum == 0)
    {
      return 1;
    }
    return 0;
  }
  if (!lessOneBitEncendido(index, sum))
  {
    cambiarValorBitLessOne(index, sum, 1);
    if (sum - numbers[index] >= 0)
    {
      cambiarValorBitBitArray(index, sum, subsetSum((sum - numbers[index]), index + 1, size) || subsetSum((sum), index + 1, size));
    }
    else
    {
      cambiarValorBitBitArray(index, sum, subsetSum((sum), index + 1, size));
    }
  }

  return bitArrayEncendido(index, sum);
}

int main()
{
  input;
  LLi actualStateOf64 = 64;
  LLi iterator = 0;
  for (LLi i = 1; i < INF; i++)
  {
    if (i > actualStateOf64)
    {
      actualStateOf64 += 64;
      iterator++;
    }
    valuesNumbersWithMultiples64[i] = make_pair(actualStateOf64, iterator);
  }

  printf("Escriba la cantidad de elementos del arreglo:\n");
  scanf("%lld", &N);
  printf("El arreglo tendrá %lld elementos\n", N);
  for (LLi i = 1; i <= N; i++)
  {
    scanf("%lld", &numbers[i]);
  }
  LLi sumToFind = 0;
  printf("Escriba la suma a encontrar:\n");
  scanf("%lld", &sumToFind);
  printf("Se buscará si existe o no la suma %lld en el arreglo, conformada por un subarreglo\n", sumToFind);

  LLi existSubsetSum = subsetSum(sumToFind, 1, N);
  printf("Existe la suma %lld conformada por un subarreglo? %s\n", sumToFind, existSubsetSum ? "SI" : "NO");

  return 0;
}
