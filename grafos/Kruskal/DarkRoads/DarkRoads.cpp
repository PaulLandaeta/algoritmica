#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int
#define Ld long double
#define MAX_N 200001

using namespace std;
Li parent[MAX_N];
Li rango[MAX_N];
Li n = 1, m = 1;

void init()
{
  for (Li i = 0; i <= MAX_N; i++)
  {
    parent[i] = i;
    rango[i] = 0;
  }
}

Li find(Li x)
{
  if (x == parent[x])
  {
    return x;
  }
  else
  {
    parent[x] = find(parent[x]);
    return parent[x];
  }
}

bool sameComponent(Li nodeA, Li nodeB)
{
  return find(nodeA) == find(nodeB);
}

void unionRango(Li x, Li y)
{
  Li xRaiz = find(x);
  Li yRaiz = find(y);
  if (rango[xRaiz] > rango[yRaiz])
  {
    parent[yRaiz] = xRaiz;
  }
  else
  {
    parent[xRaiz] = yRaiz;
    if (rango[xRaiz] == rango[yRaiz])
    {
      rango[yRaiz]++;
    }
  }
}

struct Arista
{
  Li origen;
  Li destino;
  Ld peso;
  Arista() {}
  bool operator<(const Arista &a) const
  {
    if (peso == a.peso)
    {
      return origen < a.origen;
    }
    else
    {
      return peso < a.peso;
    }
  }
} aristas[MAX_N];

Arista MST[MAX_N];

Li numAristasArbol;

Ld kruskal(Li nroNodos, Li nroAristas)
{

  Li origen, destino;
  Ld peso;

  Ld total = 0;

  numAristasArbol = 0;

  init();
  sort(aristas, aristas + nroAristas);

  for (Li i = 0; i < nroAristas; i++)
  {
    origen = aristas[i].origen;
    destino = aristas[i].destino;
    peso = aristas[i].peso;

    if (!sameComponent(origen, destino))
    {
      total += peso;
      unionRango(origen, destino);
      MST[numAristasArbol] = aristas[i];
      numAristasArbol++;
    }
  }
  return total;
}

int main()
{
  input;
  while (true)
  {
    scanf("%lld %lld", &n, &m);
    if (!n && !m)
    {
      break;
    }
    Li pesoOriginalGrafo = 0;
    for (Li i = 0; i < m; i++)
    {
      Li nodoOrigen = 0;
      Li nodoDestino = 0;
      Ld pesoArista = 0;
      scanf("%lld %lld %Lf", &nodoOrigen, &nodoDestino, &pesoArista);
      aristas[i].origen = nodoOrigen;
      aristas[i].destino = nodoDestino;
      aristas[i].peso = pesoArista;
      pesoOriginalGrafo += pesoArista;
    }
    Ld pesoMTS = kruskal(n, m);
    printf("%.0Lf\n", pesoOriginalGrafo - pesoMTS);
  }

  return 0;
}