#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> x;
    int aux; cin >> aux;
    x.push_back(aux);
    int counter = 0;
    
    for(int i = 1;i<x.size();i++){
        if(counter>2){
            cout << "NO" << endl;
            break;
        }
            if(x[i] == 4){
                counter ++;
            }
            else{
                counter = 0;
            }
        }
        if(counter<3 && x[0] != 4){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
