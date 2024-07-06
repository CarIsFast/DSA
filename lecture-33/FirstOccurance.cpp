#include<iostream>
using namespace std;

int firstOccurance(int arr[], int s, int e, int key){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        
        if(mid ==0 || arr[mid-1] != key){
            return mid;
        }
        else{
            firstOccurance(arr, s, mid-1, key);
        }
    }
    else if(key < arr[mid]){
        firstOccurance(arr, s, mid-1, key);
    }
    else{
        firstOccurance(arr, mid+1, e, key);
    }
}
int lastOccurance(int arr[], int s, int e, int key){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        
        if(mid ==0 || arr[mid+1] != key){
            return mid;
        }
        else{
            lastOccurance(arr, mid+1, e, key);
        }
    }
    else if(key < arr[mid]){
        lastOccurance(arr, s, mid-1, key);
    }
    else{
        lastOccurance(arr, mid+1, e, key);
    }
}

int main() {
    int arr[]= {0,0,1,1,2,2,2,3,4,8,8,9};
    int F_ans= firstOccurance(arr, 0,11,8);
    cout<<F_ans<<endl;
    int L_ans= lastOccurance(arr, 0,11,8);
    cout<<L_ans<<endl;
    return 0;
}