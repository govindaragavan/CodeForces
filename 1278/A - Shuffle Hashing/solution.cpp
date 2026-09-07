#include <bits/stdc++.h>
using namespace std;
void solve(){
 string p;
 string h;
 cin>>p;
 cin>>h;
 int len=p.length();
 int hlen=h.length();
int l=0,r=0;
multiset<char> set1;
for(char x : p) set1.insert(x);
multiset<char> set2;
while(l<=r && r<hlen){
    set2.insert(h[r]);
if(r-l+1==len){
    if(set1==set2) {cout<<"YES"<<endl; return;}
    else { auto it = set2.find(h[l]); set2.erase(it);  l++;}
 
}
r++;
}
 
    cout<<"NO"<<endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}