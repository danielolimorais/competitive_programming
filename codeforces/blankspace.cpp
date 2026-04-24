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
        int counter = 0;
        int maxv = 0;
        
        for(int i =0; i<n;i++){
            if(arr[i] == 0){
                counter++;
            }else{
                counter = 0;
            }
            maxv= max(counter, maxv);
        }
        cout << maxv << endl;

    }
}