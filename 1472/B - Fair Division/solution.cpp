#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a == 1) c1++;
            else c2++;
        }
 
        int total = c1 + 2 * c2;
 
        if (total % 2 != 0) {
            cout << "NO
";
        } else {
            int half = total / 2;
            if (half % 2 == 1 && c1 == 0) {
                cout << "NO
";
            } else {
                cout << "YES
";
            }
        }
    }
 
    return 0;
}