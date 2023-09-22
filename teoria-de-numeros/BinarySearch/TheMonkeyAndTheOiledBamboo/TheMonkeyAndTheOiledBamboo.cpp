#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int
using namespace std;

Li v[10000010];
Li diferencias[10000010];
bool arregloAux[10000010];
Li N;
Li grandote;
Li litteOne;

bool f(Li k)
{
  for (Li i = 0; i < N; i++)
  {
    if (k == diferencias[i])
    {
      k--;
      if (k < 0)
      {
        return false;
      }
    }
    else if (k < diferencias[i])
    {
      return false;
    }
    else
    {
      continue;
    }
  }
  return true;
}

Li binarySearch()
{
  Li left = 1;
  Li right = 2 * (grandote + 1);
  Li mid;
  mid = (left + right) / 2;
  while (left <= right)
  {
    if (f(mid))
    {
      if (mid < litteOne)
      {
        litteOne = mid;
      }
      if (left == right)
      {
        return mid;
      }
      right = mid - 1;
    }
    else
    {
      if (left == right)
      {
        return mid;
      }
      left = mid + 1;
    }
    mid = (left + right) / 2;
  }
  return mid;
}

int main()
{
  input;
  Li T;
  scanf("%lld", &T);
  for (Li i = 0; i < T; i++)
  {
    scanf("%lld", &N);
    for (Li j = 0; j < N; j++)
    {
      scanf("%lld", &v[j]);
      if (j > 0)
      {
        diferencias[j] = v[j] - v[j - 1];
      }
      else
      {
        diferencias[0] = v[0];
      }
      if (diferencias[j] > grandote)
      {
        grandote = diferencias[j];
      }
    }
    litteOne = grandote + 1;
    binarySearch();
    printf("Case %lld: %lld\n", i + 1, litteOne);
  }
  return 0;
}