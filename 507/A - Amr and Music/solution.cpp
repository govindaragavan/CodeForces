#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> a;
        map<int,int> map;
        for(int i=0;i<n;i++){
            int num;
        cin>>num; a.push_back({num,i+1});
}
     sort(a.begin(),a.end());
    vector<int> ans;
    ;
    int sum=0;
  for(auto q : a){
  if(sum+q.first<=k) {ans.push_back(q.second); sum+=q.first;}
  else break;
  }
cout<<ans.size()<<endl;
for(int x : ans) cout<<x<<" ";
    
    
    return 0;
}