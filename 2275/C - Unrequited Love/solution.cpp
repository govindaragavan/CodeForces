//                       AM I SO TUFF?
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i=0;i<n;i++) cin >> a[i];
    int m = n - 4;
    vector<ll> v(m);
 
    for (int i = 0; i < m; i++) {
        v[i] = a[i] + a[i + 2] - a[i + 4];
    }
 
    ll ans=0;
 
    map<ll,ll> cnt;
 
    for (int i = 0; i < m; i++) {
        ans += cnt[v[i]];
        cnt[v[i]]++;
    }
 
    for (int i=0;i<m;i++) {
 
        if (i >=2 && v[i]==v[i-2])  ans--;
        
 
        if (i>=4 && v[i] == v[i-4]) ans--;
    }
 
    cout <<ans<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}