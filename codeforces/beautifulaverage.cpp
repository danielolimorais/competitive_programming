

    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define vi vector<int>
    #define ll long long
    #define pb push_back
    #define mp make_pair
    #define ii pair<int,int>
     
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
            int t; cin>>t;
            while(t--){
                int n; cin >> n;
                vi arr;
                int max = 0;
                for(int i = 0;i<n;i++){
                    int x; cin >> x;
                    arr.pb(x);
                    if(x > max){
                        max = x;
                    }
                    
                }
                cout << max << endl;
                
     
            }}