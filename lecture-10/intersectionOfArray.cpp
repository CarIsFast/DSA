#include<iostream>
using namespace std;

int main() {
    int arr1[6]={1,2,3,3,4,5};
    int arr2[4]={2,2,3,7};
    for(int i=0; i<6; i++){
        for(int j=0; j<4; j++){
            if(arr1[i]<arr2[j]){
                break;
            }
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=-10;
                break;
            }
        }
    }
    return 0;
}