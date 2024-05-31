#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    ll n, x; cin >> n >> x;
    ll a[n], pre[n];
    for(int i = 0;i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(i) pre[i] = a[i] + pre[i-1];
        else pre[i] = a[i];
    }
    auto it = upper_bound(pre, pre + n , x);
    if(it == pre) cout << 0 << endl;
    else {
        ll ans = 0, count = 0;
        ll len = it - pre;
        while(len > 0) {
            ans += ((x - pre[(len - 1)])/ len + 1) * len - count;
            count += (x - pre[(len - 1)])/ len + 1;
            len--;
        }
        cout << ans << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}