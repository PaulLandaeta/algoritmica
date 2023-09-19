#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int bit2D[20001][20001];
int N, M;

void update(int x, int y, int value)
{
  int yOriginal = y;
  for (; x <= N; x += x & -x)
  {
    for (; y <= M; y += y & -y)
    {
      bit2D[x][y] += value;
    }
    y = yOriginal;
  }
};

int query(int x, int y)
{
  int answer = 0;
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

int completeQuery(int x1, int y1, int x2, int y2)
{
  x1--;
  y1--;
  return query(x2, y2) - query(x1, y2) -
         query(x2, y1) + query(x1, y1);
};

int main()
{
  input;
  printf("Dimension del bit2D (1 <= N,M <= 20000):\n");
  scanf("%d %d", &N, &M);
  printf("%d Elementos:\n");
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= M; j++)
    {
      int value;
      scanf("%d", &value);
      update(i, j, value);
    }
  }

  int Q;
  printf("Numero de consultas:\n");
  scanf("%d", &Q);
  printf("%d Consultas:\n", Q);
  while (Q--)
  {
    int queryX1, queryY1, queryX2, queryY2;
    scanf("%d %d %d %d", &queryX1, &queryY1, &queryX2, &queryY2);
    int sumaConsulta = completeQuery(queryX1, queryY1, queryX2, queryY2);
    printf("SUMA DEL RANGO (%d, %d) - (%d, %d): %d\n",
           queryX1, queryY1, queryX2, queryY2, sumaConsulta);
  }

  return 0;
}
