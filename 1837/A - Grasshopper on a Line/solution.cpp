#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int x,k;
        cin>>x>>k;
        if(abs(x)<k){
   cout<<1<<endl;
   cout<<x<<endl;
        }
      else  if(abs(x)%k==0){
            cout<<2<<endl;
            if(x<0)
            cout<<x+1<<endl<<-1<<endl;
            else
            cout<<x-1<<" "<<1<<endl;
        }
     else   if(abs(x)%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
    }
    return 0;
}