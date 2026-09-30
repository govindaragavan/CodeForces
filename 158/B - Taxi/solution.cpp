#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
cin>>n;
vector<int> v(n);
int one=0,two=0,three=0,four=0;
  for(int i=0;i<n;i++){
     cin>>v[i];
     if(v[i]==1) one++;
     else if(v[i]==2) two++;
     else if(v[i]==3) three++;
     else four++;
  }
  int ans=four;
  ans+=two/2 + min(one,three);
  if(one>three){
    int remaining= one-three + (two%2)*2;
    if(remaining%4==0) ans=ans+remaining/4;
    else ans+=remaining/4 + 1;
  }
  else{
        int remaining= three-one + (two%2)*2;
        ans+=three-one + (two%2)*1;
 
  }
   cout<<ans<<" ";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}