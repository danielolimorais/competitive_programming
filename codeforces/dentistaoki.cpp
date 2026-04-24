#include <bits/stdc++.h>
using namespace std;
int main(){
int n, q; cin >> n >> q;
unordered_set<int> s;
int teeth = n;
for(int i = 0; i < q; i++){
    int x; cin >> x;

    if(s.count(x)){
        s.erase(x); 
        teeth--;
    } else {
        s.insert(x); 
        teeth++;
    }
} cout << teeth << "\n";
}
