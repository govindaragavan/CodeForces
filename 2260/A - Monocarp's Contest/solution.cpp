#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    int zero=0;
    for (int i = 0; i < n; i++) 
        {cin >> a[i]; if(a[i]==0) zero++;}
        int one=n-zero;
        if(zero<=1) {cout<<-1<<endl; return;}
        int ans=0;
        if(a[0]==0) ans++;
        if(a[n-1]==0) ans++;
    cout<<2-ans<<endl;
 
return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        solve();
    }
}