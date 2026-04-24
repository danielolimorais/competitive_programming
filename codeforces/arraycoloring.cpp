#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr;
        for(int i =0;i<n;i++){
            int aux; cin >> aux;
            arr.push_back(aux);
        }
        int imp = 0;
        int par = 0;
        for(int i =0;i<n;i++){
            if(arr[i] % 2 == 0){
                par++;
            }else{
                imp++;
            }
        }
        if(par == 1 && imp == 1){
            cout << "no" << "\n";
        }
        else if(imp%2 == 1 && par %2 ==1){
            cout << "no" << endl;
        }
        else if(imp%2 == 0){
            cout << "yes" << endl;
        }
        else if(imp%2 == 1 && par %2 ==0){
            cout << "no" << endl;
        }

    }
}