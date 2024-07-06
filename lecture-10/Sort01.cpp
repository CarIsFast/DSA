#include<iostream>
using namespace std;
void Print(int arr[]){
    for(int i=0; i<8; i++){
        cout<<arr[i];
    }
    cout<<endl;
}
int main() {
    int arr[8]={1,1,0,0,0,0,1,0};
    int i=0;
    int j=7;
 
    while(i<j){
  
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
            i++;j--;
        }

    }
            Print(arr);
    
    return 0;
}