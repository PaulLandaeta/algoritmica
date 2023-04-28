#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
long long dp[60];
long long fibo(long long n) {
    if(dp[n] == -1) {
        if(n <=2 ) 
            return 1;
        else {
            dp[n] = fibo(n-1)+fibo(n-2);
        }
    }
    return dp[n];  
}

int main() {
    memset(dp, -1, sizeof(dp));
    cout<<fibo(50L)<<endl;
    return 0;
}