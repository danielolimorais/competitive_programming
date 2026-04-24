#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> prices;
        int profit = 0;
        for(int i = 0; i<n;i++){
            int x; cin >> x;
            prices.push_back(x);
        }
        sort(prices.begin(),prices.end());
        while(k != 0){
            if(prices[n-1]>5){
                profit+= prices[n-1] - 5;
                
            }
            n--; k--;
        }if(n>0){
            for(int i = 0; i<n;i++){
            if(prices[i] > 10){
                profit += prices[i] -10;
            }
        }
        }
        
            cout << profit << "\n";        
    }
}

/*n = 2
k = 2
1 1
profit = 0  
*/ 