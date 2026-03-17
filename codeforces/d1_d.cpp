#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >>n;
        vector<int> x(n);
        for (int i = 0; i < n; i++) cin >> x[i];

    if (n < 2) {
        cout << 0 << "\n";
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (x[i+1] - x[i] == 1) {
            ans++;
        }
    } 
    cout << ans << endl;
}
return 0;
}
