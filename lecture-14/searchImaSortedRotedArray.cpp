#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key){
    int ans=0;
    int low = s;
    int high = e;
    while(low<=high){
    int mid = (low+high)/2;// to keep it in range of integer use mid = low + (high - low)/2 
        if(key>arr[mid]){
            low = mid+1;
        }
        if(key<arr[mid]){
            high = mid-1;
        }
        if(key==arr[mid]){
            ans = mid;
            return ans;
            break;
        }
    }
    return -1;
}

int findPivot(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = (s+e)/2;
    while (s<e){
        if (arr[mid]>=arr[0]){
            s = mid +1;
        }
        else {
            e = mid;
        }
        mid = (s+e)/2;
    }
    return s;
}

int FindPosition(int arr[], int size, int key){
    int pivot = findPivot(arr, size);
    if(arr[pivot]<=key && key<=arr[size-1]){
        return binarySearch(arr, pivot, size -1, key);
    }
    else {
        return binarySearch(arr, 0, pivot-1, key);
    }
}
int main() {
    int arr [6]={7,9,1,2,3,4};
    int key = 9;
    cout<<FindPosition(arr, 6, key);
    return 0;
}