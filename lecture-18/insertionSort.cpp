#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;
        for(j; j>=0; j--){
            if(current<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=current;
    }
}
int main() {
    int arr[6]={10,7,6,14,1,9};
    insertionSort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}