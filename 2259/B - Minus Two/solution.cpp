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
 
        vector<int> a(n);
 
        int ans = 0;
        int odd = 0;
        int op = 0;
        int ep = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (a[i] % 2 == 0) {
                if ((a[i] / 2) % 2 == 1)
                    op++;
                else
                    ep++;
            }
            else {
                odd++;
            }
        }
 
        ans = max({odd, op, ep});
 
        cout << ans << endl;
    }
 
    return 0;
}