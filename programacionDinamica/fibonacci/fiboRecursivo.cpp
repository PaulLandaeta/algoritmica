#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
long long fibo(long long n) {
    if(n <=2 ) 
        return 1;
    else {
        return fibo(n-1)+fibo(n-2);
    }
}

int main() {
    cout<<fibo(50)<<endl;
    return 0;
}