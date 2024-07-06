#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    int count=0;
    for(int i=0; i<size-1; i++){
        bool Swapped = false;
        for(int j=0; j<size-1-i; j++){
            count++;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                Swapped=true;
            }
        }
        if(Swapped==false){
            break;
        }
    }
    cout<<count<<" : ";
}
int main() {
    int arr[6]={15,2,47,2,3,4};
    bubbleSort(arr,6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}