#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else {
        bool remainingPart = isSorted(arr + 1, size-1);
        return remainingPart;
    }
}

int main() {
    int arr[] = {2,4,6,8,20};
    int ans = isSorted(arr, 5);
    if(ans)
        cout<<"saorted"<<endl;

    else 
        cout<<"not sorted"<<endl;
    return 0;
}