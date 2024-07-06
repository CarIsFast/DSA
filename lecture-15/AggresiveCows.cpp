#include<iostream>
using namespace std;
bool IsPossible(int arr[], int n, int k, int mid){
    int CowCount = 1;
    int dist = 0;
    for (int i = 0; i<n; i++){
        if((dist = arr[i]-arr[i+1])>=mid){
            dist = arr[i]-arr[i+1];
        }
        else{
            CowCount++;
            if(CowCount>k){
                return false;
            }
        }
    }
    return true;
}
int PlacingTheCow(int arr[], int n, int k){
    int s =0; 
    int maxi = -1;
    for (int i = 0; i<n; i++){
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s<=e){
        if(IsPossible(arr,n,k,mid)){
            s = mid+1;
            ans = mid;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    
    return 0;
}