#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
vector<int> grafo[100]; // grafo es una lista de listas 

void dfs(int inicial) { // 0
    stack<int> pilita; 
    vector<int> visitados(100, 0);
    pilita.push(inicial);
    while(!pilita.empty()) { // preguntamos si existe un elemento en la pila
        int nodoActual = pilita.top();
        pilita.pop();
        if(visitados[nodoActual] == 0 ) {
            visitados[nodoActual] = 1;
            for(int i = 0; i < grafo[nodoActual].length; i++) {
                int amigoDelNodoActual = grafo[nodoActual][i];
                pilita.push(amigoDelNodoActual);
            }
        }
    }
}

int main() {

}