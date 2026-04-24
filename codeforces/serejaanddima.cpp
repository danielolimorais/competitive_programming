#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n ;
    vector<int> cards;
    for(int i = 0;i<n;i++)[
        int aux; cin >> aux;
        cards.push_back(aux);
    ]
    int sereja = 0;
    int dima = 0;
    int l = 0;
    int r = n;
    for(int i = 0; i<n;i++){
        if(cards[r] => cards[l]){
            sereja +=cards[r];
            r--;
            
        }else{
            sereja+= cards[l];
            l++;
        }
    }
}