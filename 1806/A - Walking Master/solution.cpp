#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
long long a,b,c,d;
cin>>a>>b>>c>>d;
int dy=d-b;
 
if(dy<0)   {cout<<-1<<endl; continue;}
if(a+dy<c) {cout<<-1<<endl; continue;}
 
cout<<dy + (a+dy-c)<<endl;
}
    return 0;
}