#include<iostream>
using namespace std;

int main() {
    int n,t;
    
    cin>>t;
    int ans=0;
    for(int i=0; i<t; i++){
        cin>>n;
        int arr[n];
        int m=(n-1)/2;
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        for(int j=0; j<n; j++){
            ans=ans^arr[j];
        }
    }
    cout<<ans;

    return 0;
}