#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n, k;
    cin >> n >> k;
 
    if (k == 1) {
        cout << n << '
';
        return 0;
    }
 
    long long p = 1;
 
    while (p * 2 <= n) {
        p *= 2;
    }
 
    cout << 2 * p - 1 << '
';
 
    return 0;
}