#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
const int _N = 1e5 + 5;
 
void solve() {
	int n;
    cin>>n;
    vector<int> a(n);
 
    for(int i=0;i<n;i++) cin>>a[i];
 
for(int i=1;i<n-1;i++){
    if(a[i]>a[i-1] && a[i]>a[i+1]){
        cout<<"YES"<<endl;
        cout<<i<<" "<<i+1<<" "<<i+2<<endl;
        return;
    }
}
cout<<"NO"<<endl;
return;
}
 
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int T;
	cin >> T;
 
 
	while (T--) {
		solve();
	}
}