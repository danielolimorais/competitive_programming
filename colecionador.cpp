#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> nums;
    for(int i =0; i<n;i++){
        int aux; cin >> aux;
        nums.push_back(aux);
    }
    int counter =1;
    vector<int> pos(n+1);
    for(int i =0;i<n;i++){
        pos[nums[i]] = i;
    }
    for(int i =2; i<=n;i++){
        if(pos[i] < pos[i-1]) counter++;
    }
        cout << counter << "\n";

}
