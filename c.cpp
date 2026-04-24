#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int INF = 1e9;
const ll LINF = 1e18;

void solve() {
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for(int i = 0;i<n;i++){
        int custov = a[i] != b[i];
        if(i<n-1){
            int custoh = (a[i] != a[i+1]) + (b[i] != b[i+1]);
                if (custoh < custov) {
                    ans += custoh;
                    i ++;
                continue;
            }
        }
        ans += custov;
        }
        cout << ans << "\n";
    }



int main() {
    fast_io;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}