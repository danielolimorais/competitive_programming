#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define sz(s) ((int)s.size())
int main(){
    fastio;
    int x, n; cin >> x >> n;
    set<int>pos{0, x};
    multiset<int> lgstpaths = {x};
    for(int i = 0;i<n;i++){
        int aux; cin >> aux;
        auto it = pos.lower_bound(aux);
        int l;
        int r;
        
    }


    }
    