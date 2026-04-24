#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m; cin >> n >> m;
    long long a; cin >> a;
    long long shape = n*m;
    long long flag = a*a;
    long long bans = 0;
    long long mans = 0;
    if(n%a == 0){
        bans = n/a; 
    }else{
        bans = (n/a)+1;
    }
    if(m%a == 0){
        mans = m/a; 
    }else{
        mans = (m/a)+1;
    }
    long long ans = bans * mans;
    cout << ans << endl;
}