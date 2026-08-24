#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        int oddMin = a[0];
        int evenMax = a[1];
 
        for (int i = 2; i < n; i += 2)
            oddMin = min(oddMin, a[i]);
 
        for (int i = 3; i < n; i += 2)
            evenMax = max(evenMax, a[i]);
 
        if (n % 2 == 0 && evenMax + 2 <= oddMin)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}