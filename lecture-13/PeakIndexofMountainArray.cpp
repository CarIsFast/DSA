#include<iostream>
using namespace std;
//  int peakIndexInMountainArray(int arr[], int size) {
//     //int size =arr.size(); 
//     int low =0;
//     int high =size-1;
//     int mid=(low+high)/2;
//     while(low<high){
//         if(arr[mid] < arr[mid+1]){
//             low = mid +1;
//         }
//         else {
//             high = mid;
//         }
//         mid=(low+high)/2;
//     }
//     return mid;
//     }

int peakIndexInMountainArray(int arr[], int size){
    int s = 0;
    int e = size -1;
    int mid = (s+e)/2;
    while ( s<=e ){
        if((arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1])){
            return mid;
            break;
        }
        else if ((arr[mid]<arr[mid-1]) && (arr[mid]>arr[mid+1])){
            e=mid;
        }
        else if ((arr[mid]>arr[mid-1]) && (arr[mid]<arr[mid+1])){
            s = mid +1;
        }
        mid = (s+e)/2;
    }
    return 0;
}
int main() {
    int arr[14]={0,1,2,3,10,11,10,9,8,5,4,3,2,1};
    cout<<peakIndexInMountainArray(arr,14 );
    return 0;
}
   