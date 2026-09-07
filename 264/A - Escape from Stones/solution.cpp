#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 string s;
        cin>>s;
       vector<int> r;
       vector<int> l;
        for(int i=0;i<s.length();i++){
             if(s[i]=='r') r.push_back(i+1);
             else l.push_back(i+1);
        }
sort(l.rbegin(),l.rend());
for(int x : r) cout<<x<<endl;
for(int x : l) cout<<x<<endl;
    
    return 0;
}