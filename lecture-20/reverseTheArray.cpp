#include<iostream>
using namespace std;

int main() {
    int arr[6]={3,4,6,7,1,9};
    int m=3;
    int s=m+1;
    int e=(sizeof(arr)/sizeof(int))-1;

    while (s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }   
    return 0;
}