#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n, m;
        cin >> n >> m;
 
        string x, s;
        cin >> x >> s;
 
        int op = 0;
 
        while(x.size() < s.size()) {
            x += x;
            op++;
        }
 
        if(x.find(s) != string::npos) {
            cout << op << '
';
            continue;
        }
 
        x += x;
        op++;
 
        if(x.find(s) != string::npos)
            cout << op << '
';
        else
            cout << -1 << '
';
    }
}