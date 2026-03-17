#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        int pos = a;
        int ans = a;

        for (int i = 0; i < l; i++) {
            pos = (pos + b) % l;
            ans = max(ans, pos);
        }

        cout << ans << "\n";
    }
    return 0;
}
