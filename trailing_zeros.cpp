#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int counter = 0;
    for(int i = 5; i <= n; i *= 5){
        counter += n / i;
    }
    cout << counter << endl;
}
