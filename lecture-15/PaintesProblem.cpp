#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int paintersCount = 1;
    int timesum = 0;
    for(int i=0; i<n; i++){
        if(timesum+arr[i]<=mid){
            timesum+=arr[i];
        }
        else{
            paintersCount++;
            if(paintersCount > k || arr[i] > mid){
                return false;
            }
            timesum = arr[i];
        }
    }
    return true;
}
int allocation(int arr[], int n, int k){
    int s = 0;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
    }
    int e = sum;
    int mid = (s+e)/2;
    int ans = -1;
    while (s<=e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            e = mid -1;
        }
        else {
            s = mid+1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main() {
    int arr[5]={10,15,20,25,30};
    cout<<allocation(arr,5,2);
    return 0;
}
