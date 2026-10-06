// AM I SO TUFF? YES YOU ARE, LET'S FIX THIS!
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n); 
    for(int i = 0; i < n; i++) cin >> a[i];
 
    // Maintain current bounds of the permutation values
    int current_min = 1;
    int current_max = n;
 
    // Two pointers representing our window ends
    int l = 0, r = n - 1;
 
    while (l < r) {
        if (a[l] == current_min) {
            l++;
            current_min++; // The minimum possible value increases
        } 
        else if (a[l] == current_max) {
            l++;
            current_max--; // The maximum possible value decreases
        } 
        else if (a[r] == current_min) {
            r--;
            current_min++;
        } 
        else if (a[r] == current_max) {
            r--;
            current_max--;
        } 
        else {
            // Neither left nor right is the current min or max!
            // Codeforces expects 1-based indexing output
            cout << l + 1 << " " << r + 1 << "
";
            return;
        }
    }
 
    // If the pointers cross and no valid segment was found
    cout << -1 << "
";
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