#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long solve(long long n, long long k) {
        const long long MOD = 1e9 + 7;
 
        long long ans = 0;
        long long power = 1;
 
        while (k > 0) {
            if (k & 1) {
                ans = (ans + power) % MOD;
            }
 
            power = (power * n) % MOD;
            k >>= 1;
        }
 
        return ans;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;while(t--){
long long n,k;
cin>>n>>k;
Solution sol;
long long ans = sol.solve(n, k);
cout << ans << endl;}
    return 0;
}