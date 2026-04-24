#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        set<int> a = {};
        vector<int> barray;
        for(int i = 0; i< n;i++){
            int x; cin >> x;
            barray.push_back(x);
        }
        a.insert(barray[0]);
        int distance = 0;
        bool flag = true;
        int actual = 0;
        for(int i = 1; i<n-1;i++){
            if(barray[actual] = barray[i]){
                distance = 0;
            }else{
                distance++;
            }    
    }
    cout << distance << endl;
    
}}