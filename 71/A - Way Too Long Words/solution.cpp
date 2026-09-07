#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {   string s;
        cin>>s;
 
        int len=s.length();
        if(len<=10) cout<<s<<endl;
        else {
            string ans="";
            ans+=s[0];
            ans+=to_string(len-2);
            ans+=s[len-1];
            cout<<ans<<endl;
        }
 
    }
    return 0;
}