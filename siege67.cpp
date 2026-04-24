#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> nums;
        int idx1 = 0;
        for(int i = 0; i<n;i++){
            int aux; cin >> aux;
            if(aux == 67){
                idx1 = 1;
            }
            nums.push_back(aux);
        }if(idx1 == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    
    }
