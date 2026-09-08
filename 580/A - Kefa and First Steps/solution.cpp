#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
int l=0,ans=1;
for(int i=1;i<n;i++){
  if(a[i]>=a[i-1]) ans=max(ans,i-l+1);
  else l=i;
}
cout<<ans<<endl;
return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}