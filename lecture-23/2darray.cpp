#include<iostream>
using namespace std;

bool isFound(int arr[][4], int target, int row, int col){
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target)
                return 1;
        }
    }
    return 0;
}

int main() {
    // int arr [row][col];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4];
    
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};
    //input
    //cin>>arr[i][j];

    //output
    //cout<<arr[i][j];

    //rowWise input
    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    /*
    1 2 3 4
    5 6 7 8
    9 10 11 12
    */


    //colWise input
    // for(int i=0; i<4;i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }
    /*
    1 4 7 10
    2 5 8 11
    3 6 9 12
    */

    for(int i=0; i<3;i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"enter the element to search"<<endl;
    cin>>target;
    if(isFound(arr, target, 3,4))
        cout<<"found";
    else    
        cout<<"not found";

    return 0;
}