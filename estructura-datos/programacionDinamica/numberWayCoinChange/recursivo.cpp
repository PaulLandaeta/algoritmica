#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int coins[] = {1,3,4,5};
int v = 7;
int n = 4;
int f(int sumTotal, int index) {
   // si la suma total llega v es una solucion valida
   if(sumTotal == v) {
        return 1;
   }
   if(index>= n || sumTotal > v) {
    return 0;
   }
   // incluimos y excluimos 
   return f(sumTotal+coins[index], index) + f(sumTotal, index+1);
}

int main() {
    // DESPIERTE!!!!!
    // f(sumTotal, index)
    // sumTotal empieza 0 porque no hemos agarrado ninguna moneda
    // index empieza en 0 para agarra la primera moneda
    cout<<f(0,0)<<endl;
    return 0;
}