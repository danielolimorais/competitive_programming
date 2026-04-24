#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main(){
fastio;
int n, k; cin >> n >> k;
vector<int> height(n);
for(int i = 0;i<n;i++){
    cin >> height[i];
}
int sum = 0;
for(int i = 0; i<k;i++){
    sum+=height[i];
}
int mheight = sum;
int idx = 1;
for(int i = k;i<n;i++){
    sum += height[i];
    sum -= height[i-k];
    if(sum < mheight){
        idx = i-k+2;
        mheight = sum;
    }
}
cout << idx << "\n";

}

/*vector<int> psum(n+1);
psum[0] = 0;
for(int i = 1;i<=n;i++){
    psum[i] = psum[i-1] + height[i-1];
}*/