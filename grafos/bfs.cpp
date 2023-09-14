#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 

vector<int> grafo[100];
vector<bool> visitados(100);
vector<int> nivel(100);

void bfs(int nodoInicial) { // 0
    queue<int> colaNodos;
    colaNodos.push(nodoInicial); // agregamos el 0 a la cola[0]
    visitados[nodoInicial] = true; // marcar como visitado al nodo 0
    nivel[nodoInicial] = 0;
    while(!colaNodos.empty()) { // la cola no esta vacia [1]
        int nodoActual = colaNodos.front(); // vemos al 2
        colaNodos.pop();// sacamos al 2 
        for(int i = 0; i < grafo[nodoActual].size(); i++) { // visitamos a los amigos de 2 q son 5 3
            int vecino = grafo[nodoActual][i]; // vecino 5
            if(!visitados[vecino]) { // el vecino no fue visitado
                colaNodos.push(vecino); // [1,5]
                visitados[vecino] = true; // visitados[1,1,1,0,0,1,0]
                nivel[vecino] = nivel[nodoActual] + 1;
            }
        }
    }
}

int main() {
    return 0;

}