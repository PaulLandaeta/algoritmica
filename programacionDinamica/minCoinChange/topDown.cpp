#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int coins[] = {1, 3, 4, 5};
int dp[100000];
int v = 7;
int n = 4;
int f(int target) {
    if (dp[target] == -1) {
        if (target == 0) {
            return 0;
        }
        int minCoin = 100000000;
        for (int i = 0; i < n; i++) {
            if (target - coins[i] >= 0) {
                minCoin = min(1 + f(target - coins[i]), minCoin);
            }
        }
        dp[target] = minCoin;
    }
    return dp[target];
}
int main()
{
    memset(dp, -1, sizeof(dp));
    cout << f(97) << endl;
    return 0;
}