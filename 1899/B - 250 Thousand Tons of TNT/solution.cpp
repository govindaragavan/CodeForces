#include <bits/stdc++.h>
using namespace std;
vector<int> facts(int n){
  vector<int> ans;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      ans.push_back(i);
      if(i!=n/i)
      ans.push_back(n/i);
    }
  }
 
  return ans;
}
void solve() {
 long long n,sum=0;
 cin>>n;
vector<int> a(n);
vector<long long> p(n+1);
for(int i=0;i<n;i++){
cin>>a[i];
sum+=a[i];
p[i+1]=sum;
}
vector<int> factors=facts(n);
int m=factors.size();
long long ans=0;
for(int i=0;i<m;i++){
  int k=factors[i];
  long long maxi=0;
  long long mini=LLONG_MAX;
  // cout<<k<<endl;
  for(int i=k;i<1+n;i+=k){
   long long val=p[i]-p[i-k];
  //  cout<<val<<" ";
   maxi=max(val,maxi);
   mini=min(val,mini);
  }
  // cout<<endl;
  ans=max(ans,(long long)abs(maxi-mini));
}
  
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