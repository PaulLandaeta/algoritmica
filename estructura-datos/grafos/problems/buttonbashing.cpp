#include <bits/stdc++.h>
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
using namespace std; 

vector<int> grafo[100];// NO ES NECESARIO
vector<bool> visitados(3610);
vector<int> nivel(3610);
vector<int> botones;

void bfs(int nodoInicial) { 
    queue<int> colaNodos;
    colaNodos.push(nodoInicial); 
    visitados[nodoInicial] = true; 
    nivel[nodoInicial] = 0;
    while(!colaNodos.empty()) { 
        int nodoActual = colaNodos.front(); 
        colaNodos.pop();

        for(int i = 0; i < botones.size(); i++) { 
            int vecino = nodoActual + botones[i];
            if(vecino > 3600) {
                vecino = 3600;
            }
            if(vecino >=0 && !visitados[vecino]){
                colaNodos.push(vecino);
                visitados[vecino] = true;
                nivel[vecino] = nivel[nodoActual] + 1;
            }
        }
    }
}

int main() {
    input;
    int test, n, t;
    cin>>test; 
    while(test--){
        cin>>n>>t;
        botones = vector<int> (n);
        for(int i = 0; i < n; i++) {
            cin>>botones[i];
        }
        for(int i = 0; i < 3610 ; i++) {
            nivel[i] = -1;
            visitados[i] = false;
        }
        bfs(0);
        if(nivel[t] != -1) {
            cout<<nivel[t] << " " << 0 <<endl;
        } else {
            int current = t;
            while(nivel[current] == -1) {
                current++;
            }
            cout<<nivel[current] << " " << current - t << endl;
        }
    }
    return 0;

}