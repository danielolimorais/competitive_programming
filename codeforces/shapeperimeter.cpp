#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int op, sz; cin >> op >> sz;
        int ans = sz*4;
       vector<int> x;
       vector<int> y;
       for(int i = 0;i<op;i++){
        int x1, y1; cin >> x1 >> y1;
        x.push_back(x1);
        y.push_back(y1);
       }for(int i = 1;i<op;i++){
        ans += 2*(x[i] + y[i]);
       }
       cout << ans << endl;
        
    }
}

//vector<pair<int, int>> coords;
      //  for(auto &[x,j]:coords){
        //    cin >> x >> j;
