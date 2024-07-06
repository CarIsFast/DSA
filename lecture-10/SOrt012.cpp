#include<iostream>
using namespace std;

int main() {
    int arr[9]={0,2,2,1,0,1,1,0,2};
    int i=0,j=7,k=8;
    while(i<j && i<k){
        while(arr[i]==0){i++;}
        while(arr[j]==1){j--;}
        while(arr[k]==2){k--;}
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;j--;
        }
        if(arr[i]==2 && arr[k]==0){
            swap(arr[i],arr[k]);
            i++;k--;
        }
        if(arr[j]==2 && arr[k]==1){
            swap(arr[j],arr[k]);
            j--;k--;
        }
        
    }
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}