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
   int min=INT_MAX;
   int index=0,f=1;
for(int i=1;i<n;i++){
  if(!(a[i-1]<=a[i])){
f=0;
  }
  int currmin=a[i]-a[i-1];
  if(currmin<min){
    min=currmin;
    index=i-1;
  }
}
if(!f) {cout<<0<<endl; continue;}
int res= (a[index+1]-a[index])/2+1;
 
cout<<res<<endl;
    }
 
    return 0;
}