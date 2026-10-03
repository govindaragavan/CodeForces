#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
int n;
cin>>n;
int len=n*(n-1)/2;
vector<int> b(len);
map<int,int> mp;
 
for (int i = 0; i < len; i++){ 
  cin>>b[i];
}
sort(b.begin(), b.end());
int x =n-1,i=0;
while(x>0){
    cout<<b[i]<<" ";
    i+=x;
    x--;
}
 cout<<1000000000<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--) solve();
    return 0;
}