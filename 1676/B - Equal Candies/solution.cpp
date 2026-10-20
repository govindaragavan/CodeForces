                       //GOTCHA STALKING MY CODE
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
sort(a.begin(), a.end());
ll  ans=0;
for(int x : a){
    ans+=(x-a[0]);
} 
cout<<ans<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}