#include <bits/stdc++.h>
using namespace std;
 
bool fun(int n, int k, int x, vector<int> &res) {
    if (n <= 0) return false;
 
    if (n <= k) {
        if (n == x) return false; 
        res.push_back(n);
        return true;
    }
 
    if (fun(n - k, k, x, res)) {
        res.push_back(k);
        return true;
    }
    return false;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
 
        vector<int> res;
        bool ok = false;
 
        if (k == 1) {
            if (x == 1) {
                ok = false;
            } else {
                ok = true;
                res.assign(n, 1);
            }
        } else if (k == 2) {
            if (x == 1) {
                if (n % 2 == 0) {
                    ok = true;
                    res.assign(n / 2, 2);
                }
            } else if (x == 2) {
                ok = true;
                res.assign(n, 1);
            } else {
                ok = true;
                res.assign(n, 1);
            }
        } else {
            if (x != 1) {
                ok = true;
                res.assign(n, 1);
            } else {
                if (n % 2 == 0) {
                    ok = true;
                    res.assign(n / 2, 2);
                } else {
                    ok = true;
                    res.assign(n / 2 - 1, 2);
                    res.push_back(3);
                }
            }
        }
 
        if (!ok) {
            cout << "NO
";
        } else {
            cout << "YES
";
            cout << res.size() << "
";
            for (int v : res) cout << v << " ";
            cout << "
";
        }
    }
    return 0;
}