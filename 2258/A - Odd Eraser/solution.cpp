#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (auto &x : a)
            cin >> x;
 
        if (n == 1) {
            cout << a[0] << '
';
        } else {
            cout << gcd(a[0], a[n - 1]) << '
';
        }
    }
 
    return 0;
}