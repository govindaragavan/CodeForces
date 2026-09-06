#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    int len = n * k;
    vector<long long> a(len);
 
    for (auto &x : a)
        cin >> x;
 
    int med = (n + 1) / 2;
 
    // Number of elements that must remain after each median
    int after = n - med;
 
    long long ans = 0;
 
    int pos = len - after - 1;
 
    for (int i = 0; i < k; i++) {
        ans += a[pos];
 
        // Move left by enough elements for the next group
        pos -= after + 1;
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
}