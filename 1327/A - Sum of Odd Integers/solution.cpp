#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n,k;
  cin>>n>>k;
  
   if(n%2==k%2 && k<=n/k) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) solve();
    return 0;
}