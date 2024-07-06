#include<iostream>
using namespace std;

void binarySearch(int arr[], int high, int key){
    int ans=0;
    int low = 0;
    while(low<=high){
    int mid = (low+high)/2;// to keep it in range of integer use mid = low + (high - low)/2 
        if(key>arr[mid]){
            low = mid+1;
        }
        if(key<arr[mid]){
            high = mid-1;
        }
        if(key==arr[mid]){
            ans = arr[mid];
            cout<<"Element found ";
            cout<<ans;
            break;
        }
    }
}
int main() {
    int arr[7]={1,2,4,5,12,23,47};
    binarySearch(arr, 7,3);
    return 0;
}
