#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int

using namespace std;

Li numbers[10000001];
vector<Li> primes;
Li N;

void findPrimeNumbers(Li N)
{
  primes.clear();

  numbers[0] = numbers[1] = 1;

  for (size_t i = 2; i * i <= N; i++)
  {
    if (!numbers[i])
    {
      for (size_t j = i * i; j <= N; j += i)
      {
        numbers[j] = 1;
      }
    }
  }

  for (size_t i = 2; i <= N; i++)
  {
    if (!numbers[i])
    {
      primes.push_back(i);
    }
  }

  memset(numbers, 0, sizeof(numbers));
}

int main()
{
  input;
  Li t;
  printf("Numero de casos\n");
  scanf("%lld", &t);
  printf("%lld Casos se llevarán a cabo para encontrar todos los primos hasta 'N'\n", t);
  while (t--)
  {
    scanf("%lld", &N);
    printf("Encontrar los números primos hasta 'N'\n");
    findPrimeNumbers(N);
    int sizeVectorPrimes = primes.size();
    printf("Se encontraron %d primos:\n", sizeVectorPrimes);
    for (size_t i = 0; i < primes.size(); i++)
    {
      printf("%lld ", primes[i]);
    }
    printf("\n");
  }

  return 0;
}
