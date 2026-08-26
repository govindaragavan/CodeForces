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
for(int i=0;i<n;i++)
cin>>a[i];
 
int Xor=0;
for(int i=0;i<n;i++)
    Xor=Xor^a[i];
 if((n%2==0 && Xor==0) || n%2!=0){cout<<Xor<<endl; continue;}
 else{ cout<<-1<<endl; continue;}
}
    return 0;
}