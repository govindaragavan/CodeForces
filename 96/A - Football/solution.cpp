#include <bits/stdc++.h>
using namespace std;
void solve(){
string s;
cin>>s;
 
int len=1,ans=0;
int n=s.length();
for(int i=1;i<n;i++){
  if(s[i-1]==s[i]) len++;
  else len=1;
  ans=max(len,ans);
}
if(ans>6) cout<<"YES"<<endl;
  else  cout<<"NO"<<endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}