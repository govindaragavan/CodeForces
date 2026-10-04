#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
   vector<int> b(n);
 
   for (int i = 0; i < n; i++) cin>>b[i];
   if(n==1 || n==2) {if(n==2 && b[0]==b[1]) cout<<1<<endl; else cout<<n<<endl; return;}
   
   vector<int> a;
   int rabs= abs(b[0]-b[1]);
   int labs=abs(b[1]-b[1+1]);
   int tabs=abs(b[0]-b[2]);
 
  if(rabs+labs==tabs)
    a={b[0]};
  else
  a={b[0],b[1]};
 
int cnt=0;
   for(int i=2;i<n-1;i++){
   int rabs= abs(a.back()-b[i]);
   int labs=abs(b[i]-b[i+1]);
   int tabs=abs(a.back()-b[i+1]);
   if(rabs+labs==tabs) 
   continue;
   else {a.push_back(b[i]);}
   }
  int contval=0;
  for(int i=1;i<n-1;i++)
   contval+=(abs(b[i+1]-b[i])+abs(b[i]-b[i-1]));
   if(contval!=0)
   a.push_back(b[n-1]);
//    for(int x : a) cout<<x<<" ";
//    cout<<endl;
  cout<<a.size()<<endl;
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