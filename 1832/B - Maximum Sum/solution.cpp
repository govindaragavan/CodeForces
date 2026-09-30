#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<long long> a(n);
 
    for (auto &x : a)
        cin >> x;
 
    // Sort the array
    sort(a.begin(), a.end());
 
    // Prefix sum
    vector<long long> pref(n + 1, 0);
 
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }
 
    long long ans = 0;
 
    // x = number of operations removing two minimums
    for (int x = 0; x <= k; x++) {
 
        // Remove 2*x elements from the left
        int left = 2 * x;
 
        // Remaining k-x operations remove
        // one element each from the right
        int right = n - (k - x);
 
        // Sum of a[left ... right-1]
        long long sum = pref[right] - pref[left];
 
        ans = max(ans, sum);
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
 
    return 0;
}