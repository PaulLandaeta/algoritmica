#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main() {
    // input;
    int n; 
    cin>>n;
    vector<int> v(n+1);
    for(int i = 1; i<=n; i++){
        cin>>v[i];
    }
    int ans = 0;
    for(int i = 2; i <= n; i++) {
        int l = i, r = i;
        while(l > 1 && r < n && v[l-1]== v[r+1] && v[l-1]< v[l]){
            l--;
            r++;
        }
        ans = max(ans, r-l+1);
    }
    if(ans < 3){
        cout<< -1 << endl;
    }
    else {
        cout<< ans << endl;
    }
}