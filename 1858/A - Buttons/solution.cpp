#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
int a,b,c;
cin>>a>>b>>c;
 
int f=a;
int s=b;
if(c%2==0)
{
    f+=c/2;
    s+=c/2;
}else {
    f+=(c/2+1);
    s+=(c-(c/2+1));
}
 
if(f>s) cout<<"First"<<endl;
else
cout<<"Second"<<endl;
    }
 
    return 0;
}