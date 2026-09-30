#include <bits/stdc++.h>
using namespace std;
void solve() {
  long long n;
  cin>>n;
  vector<long long> v(n);
  for (int i = 0; i < n; i++) {
    cin>>v[i];
  }
  long long gcd1=v[0];
  long long gcd2=v[1];
  for (int i = 0; i < n; i++) {
    if(i%2==0) gcd1=__gcd(gcd1,v[i]);
    else gcd2=__gcd(gcd2,v[i]);
  }
  // cout<<gcd1<<" "<<gcd2<<" ";
  int f=0;
  if(gcd1!=1){
    for(int i=1;i<n;i+=2){
      if(v[i]%gcd1==0) {gcd1=0; break;}
    }
  }
   if(gcd2!=1){
    for(int i=0;i<n;i+=2){
      if(v[i]%gcd2==0) {gcd2=0; break;}
    }
  }
  if(gcd1==1) gcd1=0;
  if(gcd2==1) gcd2=0;
  long long ans=0;
  if(gcd1!=0 && gcd2!=0)
   ans=gcd1;
   else ans=gcd1+gcd2;
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