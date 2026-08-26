#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
int n;
cin>>n;
vector<int> a(n);
unordered_map<int,int> mp;
for(int i=0;i<n;i++){
cin>>a[i];
mp[a[i]]++;}
    
int ans=0;
int sum = mp[-1]*(-1) +mp[1]*(1);
 
while(sum<0){
    mp[-1]--;
    mp[1]++;
    sum = mp[-1]*(-1) +mp[1]*(1);
    ans++;
}
 
if(mp[-1]%2==0)
cout<<ans<<endl;
else
cout<<ans+1<<endl;
}
    return 0;
}