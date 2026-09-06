#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n,x;
cin>>n>>x;
    long long Max=0;
    vector<long long> a(n);
    long long sum=0; 
    for(int i=0;i<n;i++){ cin>>a[i];
    sum+=a[i];
    Max+=ceil((double)a[i]/x);
}
    long long Min=(sum+x-1)/x;
 
cout<<Min<<" "<<Max<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
}