#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
int n,ans=0;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++)
cin>>a[i];
unordered_map<int,int> mp;
int l=0,r=0;
while(l<=r && r<n){
    mp[a[r]]++;
while(mp[1]>=1){
    mp[a[l]]--;
    l++;
}
if(mp[1]==0)
ans=max(ans,r-l+1);
r++;
}
cout<<ans<<endl;
}
    return 0;
}