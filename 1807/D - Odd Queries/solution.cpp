#include <bits/stdc++.h>
using namespace std;
void solve(long long sum,vector<long long> a){
    int l,r,k;
    cin>>l>>r>>k;
    int d=0;
    for(int i=l-1;i<=r-1;i++) sum-=(a[i]-k);
 
    if(sum%2==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,q;
        cin>>n>>q;
        long long sum=0;
        vector<long long> a(n);
      vector<long long> prefixSum(n+1);
        for(int i=0;i<n;i++) {cin>>a[i]; sum+=a[i]; prefixSum[i+1]=sum;}
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
           long long temp=sum-prefixSum[r]+prefixSum[l-1] + (long long)k*(r-l+1);
            if(temp%2==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
 
 
    }
    return 0;
}