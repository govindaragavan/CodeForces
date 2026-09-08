#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++) {cin>>a[i];  }
int Min=*min_element(a.begin(),a.end());
int Max=*max_element(a.begin(),a.end());
int ans=max(Max-a[0],a[n-1]-Min);
for(int i=1;i<n;i++){
    ans=max(ans,a[i-1]-a[i]); 
}
cout<<ans<<endl;
return;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        solve();}
    
}