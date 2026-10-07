                                // AM I SO TUFF?
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
void solve() {
int n;
cin>>n;
string s;
cin>>s;
stack<int> st;
vector<int> ans;
for(int i=0;i<n;i++){
    if(s[i]=='1') st.push(i+1);
    else if(s[i]=='2') {
        if(!st.empty()) {st.pop(); ans.push_back(i+1);}
        
    }
}
while(!st.empty()){
ans.push_back(st.top());
st.pop();
}
sort(ans.begin(), ans.end());
cout<<ans.size()<<endl;
if(ans.empty()) {cout<<endl; return;}
for(int x : ans) cout<<x<<" ";
 
cout<<endl;
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