#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
    int n;
cin>>n;
   char str[100005];
      cin>>str;
   int t=0;
   int ans=0;
   int d=0;
for(int i=0;i<n;i++){
if(str[i]=='.'){
t++;
ans=max(ans,t);
d++;}
else if(str[i]=='#'){
ans=max(ans,t);
t=0;}
}
// cout<<str<<" "<<ans<<" ";
if(ans>=3)
cout<<2<<endl;
 
else
cout<<d<<endl;
}
}