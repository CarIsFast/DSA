#include<iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0; i<5; i++){
        ans=ans+arr[i];
        cout<<ans<<endl; 
    }
    cout<<ans;
    return 0;
}