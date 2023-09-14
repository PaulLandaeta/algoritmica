#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main() {
    input;
    int grafo[10][10];
    int aristas; 
    cin>>aristas;
    memset(grafo,0,sizeof(grafo));
    while(aristas--) {
        int a,b;
        cin>>a>>b;
        grafo[a][b] = 1;
        grafo[b][a] = 1;
    }
    for(int i=0;i<10;i++){
        for(int j = 0; j< 10;j++) {
            cout<<"["<<grafo[i][j]<<"]";
        }
        cout<<endl;
    }
    return 0;
}