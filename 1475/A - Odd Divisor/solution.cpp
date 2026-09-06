#include <bits/stdc++.h>
using namespace std;
 
void solve(){
long long n;
cin>>n;
if(n>1 && n%2==1) { cout<<"YES"<<endl; return;}
while(n>0){
    if(n%2==1 && n>1){ cout<<"YES"<<endl; return;}
    n/=2;
}
 
cout<<"NO"<<endl;
 
return;
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