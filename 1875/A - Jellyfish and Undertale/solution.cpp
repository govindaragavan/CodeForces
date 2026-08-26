#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
    long long a,b,n;
    cin>>a>>b>>n;
    long long c=b;
    long long sum=0;
    vector<int> d(n);
    for(int i=0;i<n;i++){
    cin>>d[i];
    if(d[i]>=a-1)
    d[i]=a-1;
    sum+=d[i];
        }
    cout<<sum+b<<endl;
    }
    return 0;
}