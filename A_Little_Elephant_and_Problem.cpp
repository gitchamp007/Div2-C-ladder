#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int n; cin >> n;
    ll v[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        b[i] = v[i];
    }

    sort(b , b+n);

    int c = 0;
    for(int i = 0; i < n; i++) if(v[i] != b[i]) c++;

    if(c == 0 || c== 2) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}