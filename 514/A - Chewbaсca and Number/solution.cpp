#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
if(n<10){ cout<<n<<endl; return 0;}
string s=to_string(n);
for(int i=0;i<s.length();i++){
if(i==0 && s[i]=='9') continue;
int num=s[i]-'0';
if(num>4) num=9-num;
s[i]=num+'0';
}
long long ans=stoll(s);
cout<<ans<<endl;
return 0;
    }