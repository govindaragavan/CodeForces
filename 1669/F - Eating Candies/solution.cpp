#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin>>n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin>>v[i];
  }
  int ans=0;
 int ls=0,rs=0;
 int l=0,r=n-1;
 while(l<=r ){
  if(ls>rs) {rs+=v[r]; r--;}
  else if(rs>ls) {ls+=v[l]; l++;}
  else {ans=max(ans,l+n-r-1); ls+=v[l]; l++;}
 }
 
 if(ls==rs) ans=l+n-r-1;
  cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) solve();
    return 0;
}