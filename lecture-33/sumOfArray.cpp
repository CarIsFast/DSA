#include<iostream>
using namespace std;

int arraySum(int arr[],int size){
    int i=-1;
    i++;
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];
    else{
        return arr[i] + arraySum(arr + 1, size -1);
    }
}

int sumArr2 (int arr[], int size){
    if(size <=0 ){
        return 0;
    }
    else{
        return sumArr2(arr, size-1) + arr[size-1];
    }
}
int main() {
    int arr[]={10,11,12,13,12,11};
    int sum = sumArr2(arr, 6);
    cout<<sum;
    return 0;
}