#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<long long> a(n), b(m);
 
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
 
        long long bea = b[0] + m - 1;
        long long ver = a[0] + n - 1;
 
        if (bea <= ver)
            cout << 1 << '
';
        else
            cout << 2 << '
';
    }
 
    return 0;
}