#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int precio[] = {50,20,80,45};
int valor[] = {80,10,100,150};
int cash = 100;
int n = 4;
int dp[110][5];
int f(int presupuesto, int index) {
    if(dp[presupuesto][index] == -1) {
        if(presupuesto < 0 || index >= n) {
                return 0;
            }
        int maxi = f(presupuesto, index+1);
        if(presupuesto-precio[index] >=0 ){
            maxi =max(valor[index]+f(presupuesto-precio[index], index+1), maxi);
        }
        dp[presupuesto][index] =  maxi;
    }
return dp[presupuesto][index];
    
    
}
int main() {
    memset(dp, -1 , sizeof(dp));
    cout<<f(cash,0)<<endl;
    return 0;
}