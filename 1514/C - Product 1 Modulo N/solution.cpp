#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> ans;
    long long product = 1;
 
    for (int i = 1; i < n; i++) {
        if (__gcd(i, n) == 1) {
            ans.push_back(i);
            product = (product * i) % n;
        }
    }
 
    if (product != 1) {
        for (int i = 0; i < (int)ans.size(); i++) {
            if (ans[i] == product) {
                ans.erase(ans.begin() + i);
                break;
            }
        }
    }
 
    cout << ans.size() << '
';
 
    for (int x : ans)
        cout << x << ' ';
 
    cout << '
';
 
    return 0;
}