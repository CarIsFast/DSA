#include<iostream>
using namespace std;

bool isFound(int arr[], int key, int s, int e){

    if(s>e)
        return false;
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return true;
    }
    else if(key < arr[mid]){
        isFound (arr, key, s, mid-1);
    }
    else{
        isFound (arr, key, mid+1, e);
    }
    

}

int main() {
    int arr[]={1,14,17,23,28,35};
    bool ans = isFound(arr, 35,0,5);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}