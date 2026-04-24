#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr, res; cin >> arr >> res;
    vector<pair<int, int>> nums;
    for(int i = 0; i< arr;i++){
        int aux; cin >> aux;
        nums.push_back({aux, i+1});
    }
    
    sort(nums.begin(), nums.end());
    int l = 0;
    int r = arr-1;
    while(l<r){
        if(nums[l].first + nums[r].first == res){
            cout << nums[r].second << " " << nums[l].second << "\n";
            return 0;
        }else if (nums[l].first + nums[r].first > res){
            r--;
        }else if (nums[l].first + nums[r].first < res){
            l++;
        }
    }
    cout << "IMPOSSIBLE" << "\n";

}