#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fun(int x,int y,int a,int b){
    vector<vector<int>> res;
    res.push_back({x-b, y-a});
    res.push_back({x-a, y-b});
    res.push_back({x-a, y+b});
    res.push_back({x-b, y+a});
    res.push_back({x+b, y+a});
    res.push_back({x+a, y+b});
    res.push_back({x+a, y-b});
    res.push_back({x+b, y-a});
return res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
int a,b,n,m,u,v;
cin>>a>>b;
cin>>n>>m;
cin>>u>>v;
vector<vector<int>> king = fun(n,m,a,b);
vector<vector<int>> queen = fun(u,v,a,b);
 set<vector<int>> s1(king.begin(), king.end());
        set<vector<int>> s2(queen.begin(), queen.end());
 
        int ans = 0;
 
        for (auto p : s1) {
            if (s2.count(p))
                ans++;
        }
cout<<ans<<endl;
}
    return 0;
}