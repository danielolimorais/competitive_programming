#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    char mapa[101][101];

    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> mapa[i][j];

        }
        
    }int simetrico = 1;
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mapa[i][j]!=mapa[j][i]){
                simetrico = 0;

            }
        } 
    }
    if(simetrico == 1){
        cout << "Sim" << endl;
    }else{
        cout << "Nao" << endl;
    }

}