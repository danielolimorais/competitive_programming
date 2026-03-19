#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s; cin >> s;
    string res;
    set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    for(int i = 0;i< s.length();i++){
        s[i] = tolower(s[i]);
        if(vowels.count(s[i])){
            continue;
        }
        res += ".";
        res += s[i];
    }
    cout << res << endl;
 
}
/*
        'a' + 'b' = 69 + 78
        
        "a" + 'b' = "ab"
        string t = "a";
        t += '.';
        */