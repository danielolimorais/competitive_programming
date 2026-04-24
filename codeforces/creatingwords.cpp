#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;

    while(t--){
        string a, b;
        cin >> a >> b;
        char a1 = a[0];
        char b1 = b[0];
        a[0] = b1;
        b[0] = a1;
        cout << a << " " << b << endl;    
    
    }
    
}