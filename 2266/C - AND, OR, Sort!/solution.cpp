#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    // If first character is 1,
    // it can never become 0.
    if (s[0] == '1') {
        cout << count(s.begin(), s.end(), '0') << '
';
        return;
    }
 
    int zerosRight = count(s.begin(), s.end(), '0');
    int onesLeft = 0;
 
    int ans = zerosRight;
 
    for (int i = 0; i < n; i++) {
 
        if (s[i] == '1') {
            onesLeft++;
        } else {
            zerosRight--;
        }
 
        ans = min(ans, onesLeft + zerosRight);
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