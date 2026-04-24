#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int counter = 0;
        for(int i = 0; i < 3;i++){
            int grade; cin >> grade;
            if(grade>49){
                counter++;
            }
        }if(counter >1){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}