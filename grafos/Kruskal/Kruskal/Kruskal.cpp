#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define Li long long int
#define MAX_N 10000001 // Maximo numero de vertices o nodos

using namespace std;

// parent y rango sirven para el union find
Li parent[MAX_N];
Li rango[MAX_N];

// n = numero de nodos
// m = numero de aristas
Li n, m;

void init()
{
  // inicialmente cada nodo será su propio padre
  for (Li i = 0; i <= MAX_N; i++)
  {
    parent[i] = i;
    rango[i] = 0;
  }
}

Li find(Li x)
{
  // encontramos al padre utilizando la logica del Union Find
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
  // Evaluamos si el padre de dos nodos coincide
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
  Li peso;
  Arista() {}
  // sobrecarga del operador < para ordenar las aristas
  // sort
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

Arista MST[MAX_N]; // n-1 aristas

Li numAristasArbol;

Li kruskal(Li nroNodos, Li nroAristas)
{

  Li origen, destino;
  Li peso;

  Li total = 0; // total del arbol de expansión minimo

  numAristasArbol = 0; // contar el numero de aristas

  init();                              // Iniciar el union Find
  sort(aristas, aristas + nroAristas); // ordena las aristas

  for (Li i = 0; i < nroAristas; i++)
  {
    origen = aristas[i].origen;
    destino = aristas[i].destino;
    peso = aristas[i].peso;

    if (!sameComponent(origen, destino))
    { // estos 2 dos nodos forman un ciclo
      total += peso;
      unionRango(origen, destino);       // unimos los nodos
      MST[numAristasArbol] = aristas[i]; // Guardamos la arista agregada
      numAristasArbol++;                 // incrementados la posicion para la futura arista
    }
  }
  return total;
}

int main()
{
  input;
  printf("Número de nodos y de aristas del grafo\n");
  Li t = 0;
  scanf("%lld", &t);
  while (t--)
  {
    scanf("%lld %lld", &n, &m);
    printf("Tendremos %lld nodos, y tendremos %lld aristas:\n", n, m);
    for (Li i = 0; i < m; i++)
    {
      scanf("%lld %lld %lld", &aristas[i].origen, &aristas[i].destino, &aristas[i].peso);
    }
    printf("Obtuvimos un MTS de peso %lld\n", kruskal(n, m));
    printf("Aristas que siguen conectadas en el MTS\n");
    // Imprimimos el arbol de expasion minimo
    for (Li i = 0; i < numAristasArbol; i++)
    {
      cout << MST[i].origen << " " << MST[i].destino << " " << MST[i].peso << endl;
    }
  }

  return 0;
}