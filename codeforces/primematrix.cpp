#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> crivo;
    vector<bool> nprimos(1e5+5);
    for(int i = 2; i<=1e5+5;i++){
        if(!nprimos[i]){
            for(int j=i*2;j<1e5+5;j+=i){
                nprimos[j] = true;
            }
        }
        if(nprimos[i] == false){
            crivo.push_back(i);
        }
    }
    int n, m; cin >> n >> m;
    int matriz[n+10][m+10];
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                cin >> matriz[i][j];
        }
    }
    int matrizdif[n+10][m+10];
    vector<int> linha{vector<int>(n, 0)};
    vector<int> coluna{vector<int>(m, 0)};
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                
                auto it = lower_bound(crivo.begin(), crivo.end(), matriz[i][j]);
                matrizdif[i][j] = *it - matriz[i][j];
                linha[i] += matrizdif[i][j];
                coluna[j] += matrizdif[i][j];
        }}
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            ans = min(ans,linha[i]);
        }for(int j = 0; j < m; j++){
            ans = min(ans,coluna[j]);
        }
            cout << ans << endl;
    
}


