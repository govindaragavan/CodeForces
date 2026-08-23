#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
    long long n;
cin>>n;
long long m=n;
while(m%3!=0){
    m++;
}
m=m-n;
long long k=n%3;
if(min(k,m)<=10 && min(k,m)%2!=0){
 
    cout<<"First"<<endl;
}
else
cout<<"Second"<<endl;
}}