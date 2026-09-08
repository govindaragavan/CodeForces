#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int> a(n);
vector<int> prefix(n);
int sum=0;
for(int i=0;i<n;i++) {cin>>a[i];}
sort(a.begin(),a.end());
for(int i=0;i<n;i++) {sum+=a[i]; prefix[i]=sum;}
sum=0;
for(int i=n-1;i>=0;i--){
sum+=a[i];
if(sum>(prefix[i]-a[i])){ cout<<n-i<<endl; return;}
}
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}