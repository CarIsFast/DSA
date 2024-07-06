#include<iostream>
using namespace std;
int peakIndex(int arr[], int s, int e){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid-1] < arr[mid] && arr[mid]> arr[mid+1]){
        return mid;
    }
    else if(arr[mid] > arr[mid-1] && arr[mid]< arr[mid+1]){
        peakIndex(arr, mid+1, e);
    }
    else if(arr[mid] < arr[mid-1] && arr[mid]> arr[mid+1]){
        peakIndex(arr, s, mid);
    }
}
int main() {
    int arr [] = {2,4,6,7,9,10,3};
    int peak = peakIndex(arr, 0, 6);
    cout<<peak;
    return 0;
}