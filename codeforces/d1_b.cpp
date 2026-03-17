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

        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string s = "";
        for (int i = 0; i < n; i++) {
            string f = a[i] + s;
            string b = s + a[i];
            if (f < b)
                s = f;
            else
                s = b;
        }

        cout << s << '\n';
    }

    return 0;
}
