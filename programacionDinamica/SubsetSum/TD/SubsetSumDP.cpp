#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int
using namespace std;
// El dp siempre inicia en 0 y debe ser llenado por "-1" y "1"
Li dp[101][1000001];
Li aux = 0;
// suma maxima: 1000000
// tamaño de lista maximo: 100
Li subsetSum(Li sum, Li listNumbers[], Li index, Li size)
{
  if (index == size)
  {
    if (sum == 0)
    {
      return 1;
    }
    else
    {
      return -1;
    }
  }
  if (dp[index][sum] == 0)
  {
    if (sum - listNumbers[index] >= 0)
    {
      Li valOne = subsetSum(sum - listNumbers[index], listNumbers, index + 1, size);
      Li valTwo = subsetSum(sum, listNumbers, index + 1, size);
      dp[index][sum] = valOne == 1 ? 1 : valTwo == 1 ? 1
                                                     : -1;
    }
    else
    {
      Li val = subsetSum(sum, listNumbers, index + 1, size);
      dp[index][sum] = val == 1 ? 1 : -1;
    }
  }
  return dp[index][sum];
}

int main()
{
  input;
  Li n;
  printf("Tamaño de la lista de numeros\n");
  scanf("%lld", &n);
  printf("%lld numeros tendrá la lista\n", n);
  Li listNumbers[n];
  for (Li i = 0; i < n; i++)
  {
    scanf("%lld", &listNumbers[i]);
  }
  Li sum;
  printf("Suma a evaluar\n");
  scanf("%lld", &sum);
  printf("%lld será la suma a encontrar en el arreglo\n", sum);
  printf("¿Es posible formar la suma dada? %s\n", subsetSum(sum, listNumbers, 0, n) == 1 ? "SI" : "NO");

  return 0;
}