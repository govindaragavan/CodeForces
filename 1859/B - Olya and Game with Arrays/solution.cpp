//                       AM I SO TUFF?
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> firstMin, secondMin;
 
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
 
        vector<int> a(m);
        for (int &x : a) cin >> x;
 
        sort(a.begin(), a.end());
        firstMin.push_back(a[0]);
        secondMin.push_back(a[1]);
    }
 
    int smallestFirst = *min_element(firstMin.begin(), firstMin.end());
    int smallestSecond = *min_element(secondMin.begin(), secondMin.end());
 
    long long ans = smallestFirst;
    for (int x : secondMin) ans += x;
    ans -= smallestSecond;
 
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