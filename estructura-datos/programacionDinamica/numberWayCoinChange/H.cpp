#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main()
{
    input;
    int n;
    cin>>n;
    vector<long long> v(n+2,0);
    for(int i = 1 ;i <= n;i++) {
        cin>>v[i];
    }
    v[n+1] = 318*1e9+10;
    long long l = v[1], r = 0, maxn = 0;
    bool sw = 1;
    long long ans=0;
    for(int i = 2; i<= n+1;i++) {
        if(sw && v[i] < v[i-1]) {
            sw = 0;
            maxn = v[i-1];
        } 
        else if(!sw && v[i] > v[i-1]) {
            sw = true;
            r = v[i-1];
            ans = max(ans, maxn - max(l,r));
            l = v[i-1];
        }
    }
    cout<<ans<<endl;


    return 0;
}