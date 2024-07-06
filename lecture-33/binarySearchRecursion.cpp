#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n , int s, int e){
    int mid = s = (e-s)/2;
    if(s>e){
        return false;
    }
    if(arr[mid]==n){
        cout<<"found"<<endl;
        return true;
    }
    else if(n<arr[mid]){
        binarySearch(arr, n,0,mid-1);
    }
    else{
        binarySearch(arr, n, mid+1, e);
    }
    return false;
}
int main() {
    int arr[10]={3,4,6,9,24,36,44,66,67,78};
    int n;
    cin>>n;
    bool ans=binarySearch(arr,n, 0, 9);
    cout<<ans;
    return 0;
}