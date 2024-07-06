#include<iostream>
using namespace std;

int main() {
    // int n;
    // cin>>n;
    // //equal row and col
    // //we first make array of n pointers and then make an array from each pointer of size n
    // int **arr = new int*[n];
    // for(int i=0; i<n; i++){
    //     arr[i] = new int [n];
    // }

    // for(int  i=0; i<n; i++){
    //     for(int j=0;j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // for(int  i=0; i<n; i++){
    //     for(int j=0;j<n; j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    //for nxm matrix
    int row,col;
    cin>>row>>col;
    int **arr = new int*[row];
    for(int i=0; i<col; i++){
        arr[i] = new int [col];
    }
    for(int  i=0; i<row; i++){
        for(int j=0;j<col; j++){
            cin>>arr[i][j];
        }
    }

    for(int  i=0; i<row; i++){
        for(int j=0;j<col; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}