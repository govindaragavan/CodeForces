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
 
int Max=*max_element(a.begin(),a.end());
int ref=Max+1;
vector<int> b(n);
for(int i=0;i<n;i++)
b[i]=ref-a[i];
 
for(int x : b)
cout<<x<<" ";
cout<<endl;
}
    return 0;
}