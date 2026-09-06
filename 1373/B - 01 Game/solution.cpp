#include <bits/stdc++.h>
#define all(s) s.begin(), s.end()
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
const int _N = 1e5 + 5;
 
void solve() {
	string s;
    cin>>s;
    int one=0,zero=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') zero++;
        else one++;
    }
   if(zero%2==0 && one%2==0) cout<<"NET"<<endl;
   else if(zero%2==1 && one%2==1) cout<<"DA"<<endl;
   else if(min(zero,one)%2==1) cout<<"DA"<<endl;
   else cout<<"NET"<<endl;
	return;
}
 
int main() {
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int T;
	cin >> T;
 
 
	while (T--) {
		solve();
	}
}