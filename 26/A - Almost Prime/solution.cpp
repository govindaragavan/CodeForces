#include <bits/stdc++.h>
using namespace std;
bool isAlmostPrime(int n){
    set<int> set;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
        set.insert(i);
        n/=i;}
 
    }
            if(n>1) set.insert(n);
        if(set.size()==2) return 1;
    return false;
}
void solve(){
int n;
cin>>n;
int ans=0;
for(int i=1;i<=n;i++){
    if(isAlmostPrime(i)) ans++;
}
cout<<ans<<endl;
return;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}