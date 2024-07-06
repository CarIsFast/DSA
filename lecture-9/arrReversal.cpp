#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int end=size-1;
    int start=0;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[5]={2,7,5,9,4};
    reverse(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}