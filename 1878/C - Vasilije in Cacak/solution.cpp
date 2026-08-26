#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
long long  n,k,x;
cin>>n>>k>>x;
long long min_sum=k*(k+1)/2;
long long total=n*(n+1)/2;
long long e = n-k;
long long max_sum=total-(e*(e+1)/2);
 
if(max_sum>=x && min_sum<=x)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
    }
    return 0;
}