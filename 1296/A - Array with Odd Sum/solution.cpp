#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            if(a[i]%2==0)
            even++;
            else
            odd++;
        }
if(odd>0 && even>0 || (odd==n && n%2==1))  cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    }
}