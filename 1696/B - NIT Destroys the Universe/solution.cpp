#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    int l = -1, r = -1;
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
 
        if (a[i] != 0) {
            if (l == -1)
                l = i;
 
            r = i;
        }
    }
 
    // All elements are zero
    if (l == -1) {
        cout << 0 << '
';
        return;
    }
 
    // Check whether everything between l and r is non-zero
    for (int i = l; i <= r; i++) {
        if (a[i] == 0) {
            cout << 2 << '
';
            return;
        }
    }
 
    cout << 1 << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        solve();
    }
}