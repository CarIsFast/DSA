#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int index = s;
    for(int i=0; i<len1; i++){
        arr1[i]=arr[index++];
    }
    for(int i=0; i<len2; i++){
        arr2[i]=arr[index++];
    }

    int index1 = 0;
    int index2 = 0;
    index = s;
    
    while(index1 < len1 && index2 <len2){
        if(arr1[index1] < arr2[index2]){
            arr[index++] = arr1[index1++];
        }
        else{
            arr[index++] = arr2[index2++];
        }
    }
    while(index1 < len1){
        arr[index++] = arr1[index1++];
    }
    while(index2 < len2){
        arr[index++] = arr2[index2++];
    }
    delete arr1;
    delete arr2;
}

void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main() {
    int arr [] = {2,5,3,8,1,7};
    mergeSort(arr, 0, 5);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}