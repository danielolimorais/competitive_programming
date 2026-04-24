#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    char matriz[n][n];
    int center = n/2;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(abs(i - center) + abs(j - center) <= center){
                matriz[i][j] = 'D';
            }else{
                matriz[i][j] = '*';
            }
            cout<< matriz[i][j];
        } cout << "\n";
    }
}