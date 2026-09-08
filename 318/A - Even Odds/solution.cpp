#include <bits/stdc++.h>
using namespace std;
void solve(){
long long  n,k;
cin>>n>>k;
if(n%2==0){
    long long odd=n/2;
    if(k<=odd) cout<<2*k-1<<endl;
    else  cout<<2*(k-odd)<<endl;
}
else{
long long odd=(n+1)/2;
if(k<=odd) cout<<2*k-1<<endl;
else cout<<2*(k-odd)<<endl;
}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}