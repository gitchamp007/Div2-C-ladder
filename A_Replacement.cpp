#include <bits/stdc++.h>
#define ll long long 
#define ul unsigned long long 
#define ld long double 
#define fl(i,start,end) for(ll i=start;i<end;i++)
#define M 1000000007
#define endl '\n' 
using namespace std; 

void solve() {
    int num = 0; cin >> num;
    ll temp;
    map <ll, ll> mp;
    mp[1] = 0;
    for(int step = 0; step < num; step++) {
        cin >> temp;
        mp[temp]++;
    }
    if(mp.size() == 1) {
        if(mp.begin()->first == 1) {
            for(int i = 0; i < num - 1; i++) cout << "1 ";
            cout << "2\n";
        } else {
            cout << "1 ";
            for(int i = 1; i < num; i++) cout << mp.begin()->first << " ";
            cout << endl;
        }
    } else {

        for(auto i : mp){
            if(i.first == mp.begin()->first) cout << i.first << " ";
            else if(i.first == mp.rbegin()->first) i.second--;
            while(i.second--) cout << i.first << " ";
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    // int _t; cin >> _t; while(_t--) 
        solve();
    return 0;
}