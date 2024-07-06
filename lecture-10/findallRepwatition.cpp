#include<iostream>
using namespace std;

int main() {
    int arr[8]={4,3,2,7,8,2,3,1};
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
    return 0;
}