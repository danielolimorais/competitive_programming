#include <bits/stdc++.h>
using namespace std;
const int MAX = 2e5+5;
vector<int> tree[MAX];
int ans[MAX];

int dfs(int u){
    ans[u]= 0;
    for(int v : tree[u]){
        dfs(v);
        ans[u] += ans[v]+1;
    }
    return ans[u];
}


signed main(){
    int n; cin >> n;
    for(int i = 2;i<=n;i++){
        int aux; cin >> aux;
        tree[aux].push_back(i);
    }
    dfs(1);
    for(int idx = 1;idx<=n;idx++){
        cout << ans[idx] << " ";
    }
    cout << "\n";



     
}