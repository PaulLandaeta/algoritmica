#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
const int maxn = 5e3+5;
double dp[maxn][2*maxn+100];
int main() {
    input;
    int n, k; 
    cin>>n >> k;
    vector<double> v(n);
  
    for(int i = 0; i< n;i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end(),greater<double>());
    double ans = 0;
    dp[0][maxn] = 1;
    for(int i = 0; i< n; i++ ) {
        for(int j= -i;j<=i;j++) {
            dp[i+1][j+1+maxn] += dp[i][j+maxn]*v[i];
            dp[i+1][j-1+maxn] += dp[i][j+maxn]*(1.0-v[i]);
        }
        double cum = 0;
        for(int j = k; j<=n; j++) {
            cum+= dp[i+1][j+maxn];
        }
        ans = max(ans,cum);
        
    }
    cout<< fixed << setprecision(10)<< ans <<endl;
    
}