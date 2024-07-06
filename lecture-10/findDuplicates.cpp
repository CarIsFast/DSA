#include<iostream>
using namespace std;

int main() {
    //Brute Force
    // for (int i=0; i<6; i++){
    //     for(int j=i+1; j<6; j++){
    //         if((arr[i]^arr[j])==0){
    //             cout<<arr[i];
    //             break;
    //         }
    //         else{continue;}
    //     }
    // }

    //Best in my view
    // int ans = 0;
    // int ref = 0;
    // for(int i=0; i<6; i++){
    //     ans=ans+arr[i];
    //     ref=ref+i;
    // }
    // cout<<(ans-ref);

    //Method of lav
    int arr[6]={1,2,3,3,4,5};
    int ans=0;
    for(int i=0; i<6; i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<6; i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}