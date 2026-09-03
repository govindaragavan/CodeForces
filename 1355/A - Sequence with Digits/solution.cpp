#include <bits/stdc++.h>
using namespace std;
 
void solve(pair<int,int>& minmax, long long a) {
    int Min = 10;
    int Max = -1;
 
    while (a > 0) {
        int rem = a % 10;
 
        Min = min(Min, rem);
        Max = max(Max, rem);
 
        if (Min == 0 && Max == 9)
            break;
 
        a /= 10;
    }
 
    minmax.first = Min;
    minmax.second = Max;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long a, k;
        cin >> a >> k;
 
        for (long long i = 0; i < k - 1; i++) {
            pair<int,int> minmax;
 
            solve(minmax, a);
            if (minmax.first == 0)
                break;
 
            a += 1LL * minmax.first * minmax.second;
        }
 
        cout << a << '
';
    }
 
    return 0;
}