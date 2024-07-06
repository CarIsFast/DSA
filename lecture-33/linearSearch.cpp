#include<iostream>
using namespace std;

bool isFound(int arr[],int key, int size){
    if(size==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else {
        bool remainingPart = isFound(arr +1, key, size-1);
        return remainingPart;
    }
}

int main() {
    int arr[]={2,3,4,5,6};
    bool ans = isFound(arr,10, 5);
    if(ans){
        cout<<"found"<<endl;
    }
    else {
        cout<<"not found"<<endl;
    }
    return 0;
}