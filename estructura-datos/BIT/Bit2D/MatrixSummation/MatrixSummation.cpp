#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define MAX_N 1050
#define LL long long int
using namespace std;

LL bit2D[MAX_N][MAX_N];
int N;

void update(int x, int y, LL value)
{
  int yOriginal = y;
  for (; x <= N + 9; x += x & -x)
  {
    for (; y <= N + 9; y += y & -y)
    {
      bit2D[x][y] += value;
    }
    y = yOriginal;
  }
};

LL finalQuery(int x, int y)
{
  LL answer = 0;
  int yOriginal = y;
  for (; x > 0; x -= x & -x)
  {
    for (; y > 0; y -= y & -y)
    {
      answer += bit2D[x][y];
    }
    y = yOriginal;
  }
  return answer;
};

LL query(int x1, int y1, int x2, int y2)
{
  return finalQuery(x2, y2) - finalQuery(x1, y2) -
         finalQuery(x2, y1) + finalQuery(x1, y1);
};

int main()
{
  input;
  int t;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &N);
    while (true)
    {
      char str[5];
      scanf("%s", str);
      int x, y, num;
      int x1, y1, x2, y2;
      if (str[1] == 'U')
      {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        printf("%lld\n", query(x1, y1, x2 + 1, y2 + 1));
      }
      else if (str[1] == 'E')
      {
        scanf("%d %d %d", &x, &y, &num);
        LL auxVal = query(x, y, x + 1, y + 1);
        update(x + 1, y + 1, num - auxVal);
      }
      else
      {
        break;
      }
    }
    printf("\n");
    memset(bit2D, 0, sizeof bit2D);
  }
  return 0;
}