#include<iostream>
#include<cmath>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j = i; j<size; j++){
            if(arr[i]>arr[j]){
                swap(arr[i] ,arr[j]);
            }
        }
    }
}
/*
void selectionSort(int arr[], int size){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr(minIndex)){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
*/
int main() {
    int arr[5] = {10,54,23,1,89};
    selectionSort(arr, 5);
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}