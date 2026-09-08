#include <bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
if(n>=0) {cout<< n<<endl; return;}
string s= to_string(n);
string p=s;
int len=s.length();
p.pop_back();
s.erase(len-2,1);
int num1=stoi(p);
int num2=stoi(s);
cout<<max(num1,num2)<<endl;
return;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    
}