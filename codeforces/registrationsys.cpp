#include <bits/stdc++.h>
using namespace std;
int main(){
        int n; cin >> n;
        map<string, int> mapp;
        for(int i =0;i<n;i++){
            string s; cin >> s;
            if(mapp.count(s)){
                cout << s << mapp[s] << endl;
                mapp[s]++;
            }else{
                cout << "OK" << endl;
                mapp[s] = 1;
            }
        }
}

