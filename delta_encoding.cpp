#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<char> s;
        vector<int> tries;
        vector<int> delta(n,0);
        for(int i = 0;i<n;i++){
            cin >> s[i];    
        }   
        for(int i = 0;i<m;i++){
            cin >> tries[i];
        }
        for(int i = 0;i<m;i++){
            delta[tries[i]] ++;
        }
        for(int i = n-2;i>=0;i--){
            delta[i] += delta[i+1];
        }
        vector<int> ans(26,0);
        for(int i = 0;i<n;i++){
            ans[s[i]- 'a'] += delta[i] +1;
        }
        for (int i = 0; i < 26; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}
        

        


    }
