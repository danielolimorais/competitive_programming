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
    string s; cin >> s;
    int repsa= 0;
    int repsb = 0;
    for(int i = 1;i<=s.size();i++){
        if(s[i] == s[i-1] && s[i] == 'a'){
            repsa++;
            repsa++;
        }
        if(s[i] == s[i-1] && s[i] == 'b'){
            repsb++;
            repsb++;
        }
    }
    
     
    if(repsa + repsb > 4){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
    }
    
}

int main() {
    fast_io;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}