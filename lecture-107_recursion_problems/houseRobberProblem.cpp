#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> &arr , int i){
    //base case
    if( i >= arr.size() ){
        return 0;
    }
    //one case
    int rob1 = arr[i] + solve(arr, i+2);
    int rob2 = 0 + solve(arr, i+1);
    return max(rob1, rob2);
}
int main() {
    vector<int> arr = {2,1,1,2};
    int i=0;
    int ans=solve(arr, i);
    cout<<ans;
    return 0;
}