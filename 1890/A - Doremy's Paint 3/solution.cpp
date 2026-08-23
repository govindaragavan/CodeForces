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
    if(n==1 || n==2){
        cout<<"Yes"<<endl;
        continue;
    }
 
  unordered_map<int,int> s;
  for(int i=0;i<n;i++){
      s[v[i]]++;
  }
//   cout<<s.size()<<endl;
//   for(auto it=s.begin();it!=s.end();it++)
//       cout<<it->first<<" "<<it->second<<endl;
    if(s.size()==1)
        cout<<"Yes"<<endl;
    else if(s.size()==2){
        auto it=s.begin();
        int a=it->second;
        it++;
        int b=it->second;
 
        if(n%2==0 && a==b)
            cout<<"Yes"<<endl;
        else if(n%2==0)
            cout<<"No"<<endl;
 
       if(n%2!=0 && (a==b+1 || b==a+1))
            cout<<"Yes"<<endl;
        else if(n%2!=0)
            cout<<"No"<<endl;
            
}
else
                cout<<"No"<<endl;
}
}