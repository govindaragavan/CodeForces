#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
const int _N = 1e5 + 5;
 
int T;
 
void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	if (n & 1) {
		cout << "4" << '
';
		cout << "1 " << n - 1 << '
';
		cout << "1 " << n - 1 << '
';
		cout << n - 1 << ' ' << n << '
';
		cout << n - 1 << ' ' << n << '
';
	} else {
		cout << "2" << '
';
		cout << "1 " << n << '
';
		cout << "1 " << n << '
';
	}
	return;
}
 
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> T;
	while (T--) {
		solve();
	}
}