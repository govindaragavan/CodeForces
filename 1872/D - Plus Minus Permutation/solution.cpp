#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
ll n,x,y;
cin>>n>>x>>y;
ll nx=n/x;
ll ny=n/y;
ll lcm1=lcm(x, y);
ll i=lcm1;
ll overlaps=n/i;
nx-=overlaps;
ny-=overlaps;
ll ans=0;
ll l=1,r=n;
ll sum=n*(n+1)/2;
ll xn=n-nx;
ll last_sum=sum-xn*(xn+1)/2;
ll first_sum=ny*(ny+1)/2;
 
cout<<last_sum-first_sum<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) solve();
    return 0;
}