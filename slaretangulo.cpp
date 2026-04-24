#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> grid(n);
        vector<pair<int, int>> pq;
        for(int i = 0;i<n;i++){
            cin >> grid[i];
            for(int j = 0;j<n;j++){
               if(grid[i][j] == '*'){
                pq.push_back({i, j});
               }
            }
        }
        int x1 = pq[0].first; int x2 = pq[1].first;
        int y1 = pq[0].second; int y2 = pq[1].second;
        if(x1 == x2){
            int nline = (x1+1< n ? x1+1:x1-1);
            grid[nline][y1] = '*';
            grid[nline][y2] = '*';
        }
        else if(y1 == y2){
            int ncol = (y1+1<n ? y1+1:y1-1);
            grid[x1][ncol] = '*';
            grid[x2][ncol] = '*';
        }
        else{
            grid[x1][y2] = '*';
            grid[x2][y1] = '*';
        }
        for(int i = 0; i<n;i++){
            cout << grid[i] << "\n";
        }
        }
    }
