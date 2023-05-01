#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
long long dp[60];


int main() {
    dp[0] = 0L;
    dp[1] = 1L;
    dp[2] = 1L;
    for (int i = 3;i<= 50;i++) {
        dp[i] = dp[i-1]+ dp[i-2];
    } 
    cout<<dp[50]<<endl;
    return 0;
}