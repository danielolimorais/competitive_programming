#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int grupo1 = 0;
    int grupo2 = 0;
    int grupo3 = 0;
    int grupo4 = 0;
    for(int i = 0;i<n;i++){
        int x; cin >> x;
        if(x == 1){grupo1++;}
        if(x == 2) {grupo2++;}
        if(x==3) {grupo3++;}
        if(x==4) {grupo4++;}
    }
    if(grupo3 > grupo1){
        int qtd = grupo4+grupo3;
        qtd += grupo2/2;
        if(grupo2%2!=0)qtd++;
        cout << qtd << endl;
    }
    else{
        int qtd = grupo4 + grupo3;
        grupo1 -=grupo3;
        qtd += grupo2/2;
        if(grupo2%2!=0){qtd++;
        grupo1 -=2;}
        if(grupo1>0){
            qtd += (grupo1+3)/4;
        }
        cout << qtd<< endl;
    }
}