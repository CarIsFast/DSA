#include<iostream>
using namespace std;

int main() {

    int arr[3][4];
    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    //row wise sum
    cout<<"row wise sum is -> ";
    for(int row=0; row<3;row++){
        int sum =0;
        for(int col=0; col<4; col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }

    cout<<"col wise sum is -> ";
    for(int col=0; col<4;col++){
        int sum =0;
        for(int row=0; row<3; row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }


    return 0;
}