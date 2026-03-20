#include <bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int n; cin >> n;
    vector<int> x;
    for(int i = 0;i<n;i++){
        int aux; cin >> aux;
        x.push_back(aux);
    }
    sort(x.begin(), x.end());
    

    int q; cin >> q;
    vector<int> days;
    for(int i = 0;i<q;i++){
        int aux; cin >> aux;
        auto it = upper_bound(x.begin(), x.end(), aux);
        cout << it-x.begin() << "\n";
    }

}