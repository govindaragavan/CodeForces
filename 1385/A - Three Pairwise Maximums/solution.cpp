#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
       vector<long long>a(3);
       for(int i=0;i<3;i++){
           cin>>a[i];}
           sort(a.begin(),a.end());
           if( a[1]==a[2]){ cout<<"YES"<<endl;
           cout<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;}
           else cout<<"NO"<<endl;
 
    }
    return 0;
}