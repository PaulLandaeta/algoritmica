#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int coins[] = {4, 5, 8};
int v = 14;
int n = 3;
int dp[5][16];


int main()
{
    memset(dp, 0, sizeof(dp));

    for(int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n ; i++) {
        for (int j = 1; j <= v; j++) {
            dp[i][j] = dp[i-1][j];
            cout<<coins[i-1]<<endl;
            if(j-coins[i-1]>=0) {
                dp[i][j] += dp[i][j-coins[i-1]];
            }
        }
    }
    for(int i = 0; i <= n; i++) {
        for( int j = 0; j<= v; j++) {
            cout<< "[" << dp[i][j]<<"]";
        }
        cout<<endl;
    }
    return 0;
}