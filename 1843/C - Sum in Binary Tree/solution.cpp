#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
long long n;
cin>>n;
 
    long long sum=n;
    while(n!=1){
if(n%2==0) n=n/2;
else n=(n-1)/2;
sum+=n;
}
cout<<sum<<endl;
    }
    return 0;
}