#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   vector<int> v(n);
   
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
int x;
cin>>x;
sort(v.begin(),v.end());
if(v[v.size()-1]>=x && v[0]<=x)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;}
}