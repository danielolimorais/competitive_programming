#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int counter = 0;
        vector<int> arr;
        int n; cin >> n;
        for(int i = 0;i<n;i++){
            
            int x; cin >> x;
            arr.push_back(x);
        }
        for(int i = 0; i < n; i++){
            if(arr[i] - arr[i+1] == 1){
                counter++;
            }
        }
        cout << counter;
        }

        
    
    return 0;
}
