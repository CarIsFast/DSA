#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int> arr, int len){
    if(len == 0)
        return 0;
    int maxi = INT_MIN;
    for(int i=0; i< arr.size(); i++){
        if(len-arr[i] >= 0){
            int ans = solve(arr, len - arr[i]);
            maxi = max(maxi, ans + 1);
        }
    }
    return maxi;
}
int main() {
    vector<int> arr = {5,2,2};
    int len = 7;
    int ans = solve(arr, len);
    cout<<ans;
    return 0;
}