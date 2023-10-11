#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int

using namespace std;

Li numbers[1000001];
Li results[1000001];
Li tablaAditiva[1000001];

vector<Li> primes;
Li N;
Li biggerFactorial = 1;

void findPrimeNumbers(Li N)
{
  primes.clear();

  numbers[0] = numbers[1] = 1;

  for (Li i = 2; i * i <= N; i++)
  {
    if (!numbers[i])
    {
      for (Li j = i * i; j <= N; j += i)
      {
        numbers[j] = 1;
      }
    }
  }

  for (Li i = 2; i <= N && primes.size() < 78498; i++)
  {
    if (!numbers[i])
    {
      primes.push_back(i);
    }
  }
}

int main()
{
  input;

  findPrimeNumbers(1000000);

  for (Li i = 2; i <= 1000000; i++)
  {
    Li j = 0, r = i;
    biggerFactorial = 0;
    while (r != 1)
    {
      if (!numbers[i])
      {
        biggerFactorial = 1;
        break;
      }
      if (r % primes[j] == 0)
      {
        r = r / primes[j];
        biggerFactorial++;
        if (results[r])
        {
          biggerFactorial += results[r];
          break;
        }
      }
      else
      {
        j++;
      }
    }
    results[i] = biggerFactorial;
    tablaAditiva[i] = tablaAditiva[i - 1] + biggerFactorial;
  }

  while (scanf("%lld", &N) != EOF)
  {
    printf("%lld\n", tablaAditiva[N]);
  }

  return 0;
}
