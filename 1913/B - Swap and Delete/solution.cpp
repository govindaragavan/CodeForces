                     //AM I SO TUFF?
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
string s;
cin>>s;
unordered_map<char, int> mp;
for( char x : s) mp[x]++;
 
for(int i=0;i<s.length();i++){
    if(s[i]=='1') {if(mp['0']==0) break; mp['0']--;}
    else{ if(mp['1']==0) break; mp['1']--;}
    }
    cout<<mp['1']+mp['0']<<endl;
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